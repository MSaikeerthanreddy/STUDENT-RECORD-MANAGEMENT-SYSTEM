#include"header.h"
void stud_mod(SLL *ptr)
{
    SLL *temp=ptr;
    char name[50],ch;
    int c=0,flag=0,num,i,a[c];
    float per;
    printf("Enter which record to search for modification\n");
    printf("R/r : Search by Rollno\nN/n : Searwch by name\np/P : Search by percentage\n");
    scanf(" %c",&ch);
    switch(ch)
    {
        case 'R':
        case 'r':printf("Enter the rollno to search:\n");
                 scanf("%d",&num);
l:while(temp)
  {
      if(temp->rollno==num)
      {
          printf("Modify the record:\n");
          printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
          scanf("%s%f",temp->name,&temp->percentage);
          return;
      }
      temp=temp->next;
  }
  printf("No record found\n");break;
        case 'n':
        case 'N':printf("Enter the name to search");
                 scanf("%s",name);
                 while(temp)
                 {
                     if(strcmp(temp->name,name)==0)
                     {
                         a[c]=temp->rollno;
                         c++;
                         flag=1;
                     }
                     temp=temp->next;
                 }
                 temp=ptr;
                 if(flag==0)
                 {
                     printf("No records found\n");
                     return;
                 }
                 else if(c==1)
                 {
                     while(temp)
                     {
                         if(strcmp(temp->name,name)==0)
                         {
                             printf("Modify the record:\n");
                             printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                             scanf("%s%f",temp->name,&temp->percentage);
                             return;
                         }
                         temp=temp->next;
                     }
                 }
                 else if(c>1)
                 {
n:printf("Enter rollno to modify from the below records:\n");
  while(temp)
  {
      if(strcmp(temp->name,name)==0)
          printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
      temp=temp->next;
  }
  scanf("%d",&num);
  for(i=0;i<c;i++)
      if(a[i]==num)
          break;
  if(num==a[i])
  {
      temp=ptr;
      goto l;
  }
  else
  {
      temp=ptr;
      printf("Invalid number\nCheck the list again\n");
      goto n;
  }
                 }
        case 'P':
        case 'p':printf("Enter the percentage to search:\n");
k:scanf("%f",&per);
                 if(per>=0.00 && per<=100.00)
                 {
                     while(temp)
                     {
                         if(temp->percentage==per)
                         {
                             a[c]=temp->rollno;
                             c++;
                             flag=1;
                         }
                         temp=temp->next;
                     }
                     temp=ptr;
                     if(flag==0)
                     {
                         printf("No records found\n");
                         return;
                     }
                     else if(c==1)
                     {
                         while(temp)
                         {
                             if(temp->percentage==per)
                             {
                                 printf("Modify the record:\n");
                                 printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
                                 scanf("%s%f",temp->name,&temp->percentage);
                                 return;
                             }
                             temp=temp->next;
                         }
                     }
                     else if(c>1)
                     {
retry:printf("Enter rollno to modify from the below records:\n");
  while(temp)
  {
      if(temp->percentage==per)
          printf("%d %s %f\n",temp->rollno,temp->name,temp->percentage);
      temp=temp->next;
  }
  scanf("%d",&num);
  for(i=0;i<c;i++)
      if(a[i]==num)
break;
  if(num==a[i])
  {
      temp=ptr;
      goto l;
  }
  else
  {
      temp=ptr;
      printf("Invalid number\nCheck the list again\n");
      goto retry;
  }
                     }
                     else
                     {
                         temp=ptr;
                         printf("Entered percentage not in the range\n");
                         printf("Enter the percentage to search:\n");
                         goto k;
                     }break;
                     default :printf("Invalid choice\n");

                 }

    }
}

                                                                
