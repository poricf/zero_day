export GIT_AUTHOR_EMAIL="famkhan006@gmail.com"
export GIT_COMMITTER_EMAIL="famkhan006@gmail.com"
export GIT_AUTHOR_NAME="porcif"
export GIT_COMMITTER_NAME="porcif"
S=$(date -d "2024-01-01 12:00:00" +%s)
E=$(date -d "2026-04-21 12:00:00" +%s)
J=$(date -d "2025-01-01 12:00:00" +%s)
M=$(date -d "2025-04-01 12:00:00" +%s)
awk -v s_=$S -v e_=$E -v j_=$J -v m_=$M -v e="$GIT_AUTHOR_EMAIL" -v n="$GIT_AUTHOR_NAME" 'BEGIN{
    srand(); c="git fast-import --date-format=rfc2822 --quiet"; 
    print "commit refs/heads/master" | c; 
    print "committer " n " <" e "> " strftime("%a, %d %b %Y %H:%M:%S %z", s_) | c; 
    print "data 4\nBase" | c; 
    print "M 644 inline junk\ndata 0\n" | c; 
    for(t=s_; t<=e_; t+=86400) { 
        d=strftime("%w", t); w=(d==0||d==6); 
        if(t<j_){p=w?0.05:0.1; s=0}
        else if(t<m_){p=w?0.1:0.3; s=0}
        else{p=w?0.15:0.85; s=1; if(!w&&rand()<0.05)p=0} 
        if(rand()<p){ 
            r2=rand(); if(s==0){co=int(rand()*2)+1}
            else{if(r2<0.4)co=int(rand()*3)+1; else if(r2<0.8)co=int(rand()*4)+4; else if(r2<0.95)co=int(rand()*5)+8; else co=int(rand()*6)+13} 
            for(i=1; i<=co; i++) { 
                h=int(rand()*9)+9; min=int(rand()*60); sec=int(rand()*60); 
                ct=t-43200+(h*3600)+(min*60)+sec; 
                ds=strftime("%a, %d %b %Y %H:%M:%S %z", ct); 
                print "commit refs/heads/master" | c; 
                print "committer " n " <" e "> " ds | c; 
                m_s="Fix code " i; print "data " length(m_s) "\n" m_s | c; 
                print "M 644 inline junk" | c; 
                j_s="day " t "-" i "\n"; print "data " length(j_s) "\n" j_s | c; 
            } 
        } 
    } 
    close(c)
}'
