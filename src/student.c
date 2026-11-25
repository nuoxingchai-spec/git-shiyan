#include <stdio.h>

#include "student.h"

double student_total(const Student *s)
{
    return s->math + s->english;
}

double student_average(const Student *s)
{
    return student_total(s) / 2.0;
}

char student_grade(const Student *s)
{
    double avg = student_average(s);

    if (avg >= 90.0) return 'A';
    if (avg >= 80.0) return 'B';
    if (avg >= 70.0) return 'C';
    if (avg >= 60.0) return 'D';
    return 'F';
}

void student_print_header(void)
{
    printf("%-10s %-10s %8s %8s %8s %8s %6s\n",
           "学号", "姓名", "数学", "英语", "总分", "平均", "等级");
    printf("--------------------------------------------------------------\n");
}

void student_print_row(const Student *s)
{
    printf("%-10s %-10s %8.1f %8.1f %8.1f %8.1f %6c\n",
           s->id, s->name, s->math, s->english,
           student_total(s), student_average(s), student_grade(s));
}

void student_sort_by_average(Student *arr, int n)
{
    int i, j, best;

    for (i = 0; i < n - 1; i++) {
        best = i;
        for (j = i + 1; j < n; j++) {
            if (student_average(&arr[j]) > student_average(&arr[best])) {
                best = j;
            }
        }
        if (best != i) {
            Student tmp = arr[i];
            arr[i] = arr[best];
            arr[best] = tmp;
        }
    }
}