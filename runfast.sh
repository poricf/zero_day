export GIT_AUTHOR_EMAIL="famkhan006@gmail.com"
export GIT_COMMITTER_EMAIL="famkhan006@gmail.com"
export GIT_AUTHOR_NAME="porcif"
export GIT_COMMITTER_NAME="porcif"

START=$(date -d "2025-04-01 12:00:00" +%s)
END=$(date -d "2025-10-31 12:00:00" +%s)
awk -v start=$START -v end=$END -v email="$GIT_AUTHOR_EMAIL" -v name="$GIT_AUTHOR_NAME" 'BEGIN{cmd="git fast-import --date-format=rfc2822 --quiet"; print "commit refs/heads/master" | cmd; print "committer " name " <" email "> " strftime("%a, %d %b %Y %H:%M:%S %z", start) | cmd; print "data 13\nGap fill root" | cmd; print "M 644 inline junk\ndata 0\n" | cmd; total = 0; for(t=start; t<=end; t+=86400) { commits = int(rand()*4)+7; for(i=1; i<=commits; i++) { total++; random_sec = int(rand()*32400) + 32400; date_str = strftime("%a, %d %b %Y %H:%M:%S %z", t + random_sec); print "commit refs/heads/master" | cmd; print "committer " name " <" email "> " date_str | cmd; msg = "GapFill " total; print "data " length(msg) "\n" msg | cmd; print "M 644 inline junk" | cmd; junk_data = "fill" t "-" i "\n"; print "data " length(junk_data) "\n" junk_data | cmd; } } close(cmd)}'
