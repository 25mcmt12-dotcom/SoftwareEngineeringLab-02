#ifndef STUDENT_H
#define STUDENT_H

#define SUBJ 7

struct Student{
    char rollnum[20];
    char name[100];
    int marks[SUBJ];
    int total;
    float percent;
    char grade[3];
    float cgpa;
};

#endif