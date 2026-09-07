#include"header.h"
void stud_load(SLL **ptr)
{
    FILE *fp;
    SLL *new, *temp;
    fp = fopen("std.data","r");
    if(fp == 0)
    {   
        printf("No records found\n");
        return;
    }   
    while(1)
    {   
        new = malloc(sizeof(SLL));
        if(new == 0)
            break;
        if(fscanf(fp,"%d%s%f",&new->rollno,new->name,&new->percentage) == EOF)
        {
            free(new);
            break;
        }
        new->next = NULL;
        if(*ptr == 0)
            *ptr = new;
        else
        {
            temp = *ptr;
            while(temp->next != NULL)
                temp = temp->next;
            temp->next = new;
        }
    }   
    fclose(fp);
}
