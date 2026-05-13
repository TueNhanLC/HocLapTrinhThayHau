#!/bin/bash

# tao ham dung cac lenh voi dau vao la $? - return code
function process_code( )
{ 
    local exit_code=$1
    local task_a=$2
    if [[ $exit_code -ne 0 ]]; then 
    clear;
    echo something error, please check log.txt ;
    echo task: "$task_a";
    echo task "$2" have error with exit code: "$1" 
    fi
}

# function exit log file
function exit_file()
{
    echo log end at "$(date +'%Y-%m-%d %H:%M:%S')" >> log.txt
    echo ----------------------------------------------------------------------------- >> log.txt
}


# file bat dau ghi log
echo started commit at "$(date +'%Y-%m-%d %H:%M:%S')" >> log.txt 
git status

if [[ -z $(git status --porcelain) ]]; then
    echo -e "\n\033[0;33m[Notice] clean work, nothing to commit!\033[0m"
    exit 0 # Dừng script tại đây luôn, không chạy các lệnh dưới nữa
fi
# hoi nhap noi dung commit va cos muon dọn màn hình sau khi kết thúc code ko

read -rp "type commit content: " content
read -rp "do you want to clear screen after push? enter y/n: " clear_a

git add . 

echo status of git add: $? >> log.txt  # ma loi cua git add duoc ghi vào file log.txt

git commit -m "at $(date +'%Y-%m-%d %H:%M:%S') with content $content"
git push

if [[ $clear_a == "y" || $clear_a == "Y" ]]; then clear; echo cleared screen, for more information, please visit log.txt; fi

# ket thuc log
exit_file
