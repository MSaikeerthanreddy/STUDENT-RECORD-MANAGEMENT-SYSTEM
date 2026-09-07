#include"header.h"
void stud_delete(SLL **ptr)
{
    SLL *del,*prev;
    char ch,name[50];
    int num,flag=0;
    printf("Delete data  using\n");
    printf("r/R : rollno\nN/n : name\n");
    printf("Enter your choice:\n");
    scanf(" %c",&ch);
    del=*ptr;
    if(ch=='r'||ch=='R')
    {
        printf("Enter rollno to delete:\n");
        scanf("%d",&num);
n:   while(del)
     {
         if(num==del->rollno)
         {
             if(del==*ptr)
                 *ptr=del->next;
             else
                 prev->next=del->next;
             free(del);
             return;
         }
         prev=del;
         del=del->next;
     }
     printf("Rollno not found\n");
    }
    else if(ch=='n'||ch=='N')
    {
        int c=0,a[c];
        printf("Enter name to delete:\n");
        scanf("%s",name);
        while(del)
        {
            if(strcmp(name,del->name)==0)
            {
                flag=1;
                a[c]=del->rollno;
                c++;
            }
            del=del->next;
        }
        if(flag==0)
        {
            printf("Name not found\n");
            return;
        }
        else if(c>1)
        {
l:           del=*ptr;
             while(del)
             {
                 if(strcmp(name,del->name)==0)
                     printf("%d %s\n",del->rollno,del->name);
                 del=del->next;
             }
             printf("Enter rollno to delete:\n");
             scanf("%d",&num);
             int i;
             for(i=0;i<c;i++)
                 if(a[i]==num)
                     break;
             if(a[i]==num)
             {
                 del=*ptr;
                 goto n;
             }
             else
             {
                 printf("Rollno not found\n");
                 printf("Check the rollno again\n");
                 goto l;
             }
        }
        else if(c==1)
        {
            del=*ptr;
            while(del)
            {
                if(strcmp(name,del->name)==0)
                {
                    if(*ptr==del)
                        *ptr=del->next;
                    else
                        prev->next=del->next;
                    free(del);
                    return;
                }
                prev=del;
                del=del->next;
            }
        }
    }
}
