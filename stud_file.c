#include"header.h"
void stud_file(SLL *ptr)
{
    if(ptr==0)
    {   
        printf("No records found\n");
        return;
    }   
    FILE *fp;
    fp=fopen("std.data","w");
    while(ptr)
    {   
        fprintf(fp,"%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }   
}   
