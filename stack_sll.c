/*******************************************************************************
                                SUMIT SAHA
                            M.SC IN DATA SCIENCE
                           STACK USING LINKEDLIST
*******************************************************************************/

#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *push(NODE *);
NODE *pop(NODE *);
NODE *display(NODE *);

int main()
{
    int ch,data;
    NODE *top=NULL;
    while (1)
    {
    
        printf("\n1.FOR PUSH\n2.FOR POP\n3.DISPLAY\n4.EXIT\n");
        printf("Enter your choice: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                top=push(top);
                break;
            case 2:
                top=pop(top);
                break;
            case 3:
                top=display(top);
                break;
            case 4:
                printf("\nOperation exit\n");
                exit(1);
            default:
                printf("\nWrong choice\n");
        }
    }    
    return 0;
}

NODE *push(NODE *top)
{
    
    
    NODE *nw1;
    nw1=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&nw1->data);
    
    

        
   
    if(top==NULL)
    {
            top=nw1;
            nw1->next=NULL;
    }
    else
    {
            nw1->next=top;
            top=nw1;
    }
    
        
    return top;
}

NODE *pop(NODE *top)
{
    int data;
    NODE *p=top;
    
        if(top->next==NULL)
        {
            data=top->data;
            top=NULL;
        }
        else
        {
            data=p->data;
            top=top->next;
            p->next=NULL;
        }
        printf("The deleted data is %d",data);
        
    
    return top;
}

NODE *display(NODE *top)
{
    NODE *p;
    p=top;
    if(top==NULL)
        printf("\nStack is empty\n");
    else
    {
        while(p!=NULL)
        {
           
           
            printf("\n|%d|\n",p->data);
            p=p->next;
        }
    }
    return top;
}
