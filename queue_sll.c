/*******************************************************************************
 *                          SUMIT SAHA
 *                    M.SC IN DATA SCIENCE
 *                   QUEUE USING LINKEDLIST
 * ****************************************************************************/





#include<stdio.h>
#include<stdlib.h>

struct node 
{
    int data;
    struct node *next;
};
typedef struct node NODE;
NODE *enqueue(NODE *);
NODE *dequeue(NODE *);
NODE *display(NODE *);

int main()
{
    int ch;
    NODE *head=NULL;
    
    while(1)
    {
        printf("\n1.FOR ENQUEUE\n2.FOR DEQUEUE\n3.DISPLAY\n4.EXIT\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                
                head=enqueue(head);
                break;
            case 2:
                head=dequeue(head);
                break;
            case 3:
                 head=display(head);
                break;
            case 4:
                printf("\nOperation exit\n");
                exit(1);
            default:
                printf("\nWrong choice\n");
        }
    }
}

NODE *enqueue(NODE *head)
{
    NODE *p,*q;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter the data: ");
    scanf("%d",&p->data);
    if(head==NULL)
    {
        head=p;
        head->next=NULL;
    }
    else
    {
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->next=NULL;


    }
    return head;
}

NODE *dequeue(NODE *head)
{
    NODE *p;
    if(head==NULL)
    {
        printf("Empty list");
    }
    else
    {
        p=head;
        if(head->next==NULL)
        {
            head=NULL;
        }
        else
        {
            head=head->next;
            p->next=NULL;
        }
    }
    printf("Deleted data is %d",p->data);
    return head;
}

NODE *display(NODE *head)
    {
        NODE *p;
        p=head;
        if(p==NULL)
            printf("Empty list");
        else{
            while(p!=NULL)
            {
                printf("  |%d|",p->data);
                p=p->next;
            }
        }
        return head;
    }
    



