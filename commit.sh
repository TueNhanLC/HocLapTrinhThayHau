git status
git add . 
read -p "type commit content: " content
git commit -m "at $(date +'%Y-%m-%d %H:%M:%S') with content $content"
git push