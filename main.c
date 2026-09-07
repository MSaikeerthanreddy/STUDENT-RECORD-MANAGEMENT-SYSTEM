#include"header.h"
int main()
{
    SLL *headptr=0;
    char ch,op;
    stud_load(&headptr);
    while(1)
    {
        printf("***** STUDENT MENU RECORD *****\n");
        printf("a/A : Add new record\nd/D : Delete a record\ns/S : Show the list\nm/M : Modify a record\nv/V : Save records\ne/E : Exit\nt/T : Sort the list\nl/L : Delete all the records\nr/R : Reverse the list\n");
        printf("Enter your choice:\n");
        scanf(" %c",&ch);
        switch(ch)
        {
            case 'A':
            case 'a':stud_add(&headptr);break;
            case 'd':
            case 'D':stud_delete(&headptr);break;
            case 's':
            case 'S':stud_show(headptr);break;
            case 'm':
            case 'M':stud_mod(headptr);break;
            case 'v':
            case 'V':stud_file(headptr);break;
            case 'e':
            case 'E':printf("S/s : Save and exit\nE/e : Exit without saving\n");
                     scanf(" %c",&op);
                     if(op=='s'||op=='S')
                         stud_file(headptr);
                     exit(0);
            case 't':
            case 'T':stud_sort(headptr);break;
            case 'l':
            case 'L':stud_deleteall(&headptr);break;
            case 'r':
            case 'R':reverse_link(&headptr);break;
            default :printf("Unknown choice\n");

        }
    }
}
