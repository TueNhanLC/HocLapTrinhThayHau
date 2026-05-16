# 🚀 C++ Programming Exercise Archive - Teacher Hau

This personal archive stores the entire learning roadmap, C++ algorithms, and basic DevOps automation systems.

## 🛠️ Directory Structure
* **`DD-MM-YYYY/`**: Exercise folders are scientifically categorized according to the linear timeline of the lesson.

* **`Lib.hpp`**: Library containing reusable support functions and data structures.

* **`commit.sh`**: Bash script tool to automate the Git process (Add, Commit, Push, Check Error, Clear Screen).

* **`log.txt`**: System log recording the history and execution status of local Git commands.

## ⚡ Automated System `commit.sh`
This project integrates a Bash script for automatically trapping system errors and logging operations:
* Automatically checks for empty directory status (`git status --porcelain`).

* Uses the `check_status` function to intelligently handle the exit code `$?` with the `-ne 0` operator.

* Safe Stress Test mechanism: Automatically terminates the process and retains the error log (`exit 1`) when network connection is lost.

### How to run the Script:

bash: ./commit.sh

## 📊 Technologies Used
* **Language:** C++, Bash/Shell
* **OS Environment:** Linux (Ubuntu/Debian) on ThinkPad X1 Carbon Gen 9
* **Linter:** ShellCheck Verified (No problems detected)