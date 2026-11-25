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

    printf("学生成绩管理系统 v0.3（组员分支：新增最高分统计）\n\n");
    student_sort_by_average(students, n);
    student_print_header();
    for (i = 0; i < n; i++) {
        student_print_row(&students[i]);
    }

    printf("\n最高平均分：%.1f（%s）\n",
           student_average(&students[0]), students[0].name);

    return 0;
}