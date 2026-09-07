#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<unistd.h>
typedef struct stu 
{
    int rollno;
    char name[50];
    float percentage;
    struct stu *next;
}SLL;
void stud_add(SLL **);
void stud_show(SLL *); 
void stud_delete(SLL **);
void stud_mod(SLL *); 
void stud_file(SLL *); 
void stud_deleteall(SLL **);
void reverse_link(SLL **);
int count_rec(SLL *ptr);
void stud_sort(SLL *ptr);
void stud_load(SLL **ptr);
