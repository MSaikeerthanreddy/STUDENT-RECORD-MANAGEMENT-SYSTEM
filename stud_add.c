#include"header.h"
void stud_add(SLL **ptr)
{
    SLL *new,*last,*temp=*ptr;
    int rn=1;
    while(temp)
    {   
        if(temp->rollno == rn) 
            rn++;
            else
                break;
            temp = temp->next;
    }   
    new = malloc(sizeof(SLL));
    printf("Enter name and marks:\n");
    scanf("%s%f",new->name,&new->percentage);
    new->next = 0;
    new->rollno = rn; 
    if(*ptr == 0 || new->rollno < (*ptr)->rollno)
    {   
        new->next = *ptr;
        *ptr = new;
    }   
        else
        {
            last = *ptr;
            while((last->next != 0) && (new->rollno > last->next->rollno))
                last = last->next;
                new->next = last->next;
                last->next = new;
        }
    
}
~                           
