# 学生成绩管理系统（Student Score Manager）

《软件工程》课程大作业热身项目 —— 用于实验 5「Git 分支及标签管理」的配置管理演练。

## 功能

- 录入学生成绩（学号、姓名、数学、英语）
- 计算总分与平均分、判定等级
- 按平均分排序输出成绩单

## 目录结构

```
exp5-git-lab/
├── include/student.h     学生记录与成绩计算接口
├── src/student.c         成绩计算实现
├── src/main.c            命令行入口
├── Makefile              Linux / MinGW 构建
├── build.cmd             Windows（无 make）一键构建
└── docs/design.md        设计说明
```

## 构建

Linux / MinGW：

```bash
make
./bin/score
```

Windows 无 make：

```bat
build.cmd
bin\score.exe
```