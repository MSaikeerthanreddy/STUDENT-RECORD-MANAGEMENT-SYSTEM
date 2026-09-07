#include"header.h"
void stud_deleteall(SLL **ptr)
{
    SLL *del=*ptr;
    if(*ptr==0)
    {   
        printf("No records found\n");
        return;
    }   
    while(del)
    {   
        *ptr=del->next;
        free(del);
        del=*ptr;
    }

}
