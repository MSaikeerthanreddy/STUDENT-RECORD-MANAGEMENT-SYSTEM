#include"header.h"
void stud_show(SLL *ptr)
{
    if(ptr==0)
    {   
        printf("No student records available\n");
        return;
    }   
    printf("Roll No. Name Percentage\n");
    while(ptr)
    {   
        printf("%d %s %f\n",ptr->rollno,ptr->name,ptr->percentage);
        ptr=ptr->next;
    }   
}
