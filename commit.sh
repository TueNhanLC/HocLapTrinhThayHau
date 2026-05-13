
git status

if [[ -z $(git status --porcelain) ]]; then
    echo -e "\n\033[0;33m[Notice] clean work, nothing to commit!\033[0m"
    exit 0 # Dừng script tại đây luôn, không chạy các lệnh dưới nữa
fi
read -p "type commit content: " content
read -p "do you want to clear screen after push? enter y/n: " clear_a
git add . 
git commit -m "at $(date +'%Y-%m-%d %H:%M:%S') with content $content"
git push
if [[ $clear_a == "y" || $clear_a == "Y" ]]; then clear; fi

