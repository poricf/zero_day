
export GIT_AUTHOR_EMAIL="famkhan006@gmail.com"
export GIT_COMMITTER_EMAIL="famkhan006@gmail.com"
export GIT_AUTHOR_NAME="porcif"
export GIT_COMMITTER_NAME="porcif"

rm -rf .git
git init
git branch -M main
touch junk
git add junk
git commit -m "Initial"

START=$(date -d "2025-04-21 12:00:00" +%s)
END=$(date -d "2026-04-21 12:00:00" +%s)
SKIP_DAYS=""
for i in {1..5}; do SKIP_DAYS="$SKIP_DAYS $((RANDOM % 365))"; done

awk -v start=$START -v end=$END -v skips="$SKIP_DAYS" -v email="$GIT_AUTHOR_EMAIL" -v name="$GIT_AUTHOR_NAME" '
BEGIN {
    srand()
    split(skips, s, " ")
    for(i in s) skip_map[s[i]] = 1
    
    cmd="git fast-import --date-format=rfc2822 --quiet"
    print "commit refs/heads/main" | cmd
    print "committer " name " <" email "> " strftime("%a, %d %b %Y %H:%M:%S %z", start) | cmd
    print "data 14\nInitial commit" | cmd
    print "M 644 inline junk\ndata 0\n" | cmd
    
    day_count = 0
    total = 0
    for(t=start; t<=end; t+=86400) {
        if(!(day_count in skip_map)) {
            rand_val = int(rand()*100)
            if(rand_val < 25) { commits = int(rand()*2)+1 }
            else if(rand_val < 50) { commits = int(rand()*3)+3 }
            else if(rand_val < 75) { commits = int(rand()*5)+6 }
            else { commits = int(rand()*6)+11 }
            
            for(i=1; i<=commits; i++) {
                total++
                random_sec = int(rand()*32400) + 32400
                date_str = strftime("%a, %d %b %Y %H:%M:%S %z", t + random_sec)
                print "commit refs/heads/main" | cmd
                print "committer " name " <" email "> " date_str | cmd
                msg = "Refactor " total
                print "data " length(msg) "\n" msg | cmd
                print "M 644 inline junk" | cmd
                junk_data = t "-" i "\n"
                print "data " length(junk_data) "\n" junk_data | cmd
            }
        }
        day_count++
    }
    close(cmd)
}'

git checkout main
git remote add origin https://github.com/poricf/zero_day.git
git push -u origin main --force

