#include"header.h"
void reverse_link(SLL **ptr)
{
    if(*ptr==0)
    {   
        printf("No records found\n");
        return;
    }   
    int i,c=0;
    SLL *temp=*ptr;
      while(temp)
      {   
          c++;
          temp=temp->next;
      }   
    SLL **p;
    temp=*ptr;
    if(c>1)
        p=malloc(sizeof(SLL *)*c);
        for(i=0;i<c;i++)         // storing all addresses in an array
        {
            p[i]=temp;
            temp=temp->next;
        }
        for(i=c-1;i>0;i--)     //modifying link positions
            p[i]->next=p[i-1];
            p[0]->next=0;      //modify first node next
            *ptr=p[c-1];
}
