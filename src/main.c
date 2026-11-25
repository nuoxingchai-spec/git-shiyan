#include <stdio.h>

#include "student.h"

int main(void)
{
    Student students[] = {
        {"2024003", "王五", 58.0, 64.0},
        {"2024001", "张三", 92.0, 88.0},
        {"2024004", "赵六", 85.0, 79.0},
        {"2024002", "李四", 76.0, 81.0},
    };
    int n = (int)(sizeof(students) / sizeof(students[0]));
    int i;

    printf("学生成绩管理系统 v0.2（按平均分排名）\n\n");
    student_sort_by_average(students, n);
    student_print_header();
    for (i = 0; i < n; i++) {
        student_print_row(&students[i]);
    }

    return 0;
}