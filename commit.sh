git status
git add . 
read -p "type commit content: " content
read -p "do you want to clear screen after push? enter y/n: " clear_a
git commit -m "at $(date +'%Y-%m-%d %H:%M:%S') with content $content"
git push
if [[ $clear_a == "y" || $clear_a == "Y" ]]; then clear; fi

