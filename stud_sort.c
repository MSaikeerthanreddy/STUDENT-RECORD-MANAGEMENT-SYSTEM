#include"header.h"
void stud_sort(SLL *ptr)
{
    char ch;
    SLL *i, *j;
    int rn;
    float per;
    char name[50];
    if (ptr == 0)
    {
        printf("No records found \n");
        return;
    }
    printf("R/r : sort with rollno\n");
    printf("N/n : Sort with name\n");
    printf("P/p : Sort with percentage\n");
    printf("Enter your choice: ");
    scanf(" %c", &ch);
    if (ch != 'n' && ch != 'N' && ch != 'p' && ch != 'P'&& ch != 'R' && ch != 'r')
    {
        printf("Invalid sorting choice\n");
        return;
    }
    for (i = ptr; i; i = i->next)
    {
        for (j = i->next; j; j = j->next)
        {
            int flag = 0;

            if (ch == 'n' || ch == 'N')
            {
                if (strcmp(i->name, j->name) > 0)
                    flag = 1;
            }
        else if(ch == 'r' || ch == 'R')
        {
        if(i->rollno < j->rollno)
            flag = 1;
        }
            else
            {
                if (i->percentage < j->percentage)
                    flag = 1;
            }
            if (flag)
            {
                rn = i->rollno;
                i->rollno = j->rollno;
                j->rollno = rn;
              
                strcpy(name, i->name);
                strcpy(i->name, j->name);
                strcpy(j->name, name);
              
                per = i->percentage;
                i->percentage = j->percentage;
                j->percentage = per;
            }
        }
    }
    printf("Records sorted successfully.\n");
}
