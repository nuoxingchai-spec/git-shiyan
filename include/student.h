#ifndef STUDENT_H
#define STUDENT_H

#define MAX_STUDENTS 64
#define NAME_LEN 32

typedef struct {
    char id[16];      /* 学号 */
    char name[NAME_LEN]; /* 姓名 */
    double math;      /* 数学 */
    double english;   /* 英语 */
} Student;

/* 总分 */
double student_total(const Student *s);

/* 平均分 */
double student_average(const Student *s);

/* 等级：A >=90, B >=80, C >=70, D >=60, 否则 F */
char student_grade(const Student *s);

/* 打印表头与一行记录 */
void student_print_header(void);
void student_print_row(const Student *s);

#endif /* STUDENT_H */