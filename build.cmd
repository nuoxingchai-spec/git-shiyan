@echo off
rem Windows 无 make 时的一键构建
if not exist bin mkdir bin
gcc -Wall -Wextra -std=c11 -Iinclude -o bin\score.exe src\main.c src\student.c
if errorlevel 1 (
    echo BUILD FAILED
    exit /b 1
)
echo BUILD OK -^> bin\score.exe