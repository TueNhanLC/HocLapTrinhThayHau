# Function xử lý mã lỗi (tương đương process_code trong bash)
function Process-Code {
    param (
        [int]$exitCode,
        [string]$taskName
    )
    
    $currentTime = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    
    if ($exitCode -ne 0) {
        Clear-Host
        Write-Host "Something error, please check log.txt" -ForegroundColor Red
        Write-Host "Task: $taskName"
        Write-Host "Task $taskName had an error with exit code: $exitCode"
        
        "status of $taskName: $exitCode" | Out-File -FilePath "log.txt" -Append
        Exit-File
        exit
    } else {
        "status of $taskName: $exitCode" | Out-File -FilePath "log.txt" -Append
    }
}

# Function ghi log kết thúc (tương đương exit_file)
function Exit-File {
    $currentTime = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
    "log end at $currentTime" | Out-File -FilePath "log.txt" -Append
    "-----------------------------------------------------------------------------" | Out-File -FilePath "log.txt" -Append
}

# Bắt đầu ghi log
$startTime = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
"started commit at $startTime" | Out-File -FilePath "log.txt" -Append

# Kiểm tra trạng thái git
git status

# Kiểm tra xem có gì để commit không (tương đương git status --porcelain)
$status = git status --porcelain
if ([string]::IsNullOrWhiteSpace($status)) {
    Write-Host "`n[Notice] clean work, nothing to commit!" -ForegroundColor Yellow
    exit
}

# Hỏi nội dung commit và tùy chọn xóa màn hình
$content = Read-Host "Type commit content"
$clearChoice = Read-Host "Do you want to clear screen after push? (y/n)"

"commit content: $content" | Out-File -FilePath "log.txt" -Append
"clear screen after push: $clearChoice" | Out-File -FilePath "log.txt" -Append

# Thực hiện Git Add
git add .
Process-Code $LASTEXITCODE "git add"

# Thực hiện Git Commit
$commitTime = Get-Date -Format "yyyy-MM-dd HH:mm:ss"
git commit -m "at $commitTime with content $content"
Process-Code $LASTEXITCODE "git commit"

# Thực hiện Git Push
git push
Process-Code $LASTEXITCODE "git push"

# Kết thúc log chính
Exit-File

# Cập nhật file log lên GitHub
git add log.txt
git commit -m "update file log, running near the end of the file"
git push

# Xử lý xóa màn hình nếu người dùng chọn y
if ($clearChoice -eq "y" -or $clearChoice -eq "Y") {
    Clear-Host
    Write-Host "Cleared screen, for more information, please visit log.txt" -ForegroundColor Cyan
}

exit 0