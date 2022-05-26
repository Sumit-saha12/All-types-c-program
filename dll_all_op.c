#include<stdio.h>
#include<stdlib.h>

struct node
{
    struct node *prev;
    int data;
    struct node *next;
};
typedef struct node NODE;

NODE *insbeg(NODE*);
NODE *insend(NODE*);
//NODE *insbef(NODE*);
//NODE *insaft(NODE*);
NODE *insspec(NODE*);
NODE *delbeg(NODE*);
NODE *delend(NODE*);
//NODE *delaft(NODE*);
//NODE *delbef(NODE*);
NODE *delspec(NODE*);
NODE *delspecval(NODE*);
NODE *reverse(NODE*);
NODE *sort(NODE*);
NODE *display(NODE*);


int main()
{
    int ch,ch1,ch2;
    NODE *head=NULL;
    while(1)
    {
        printf("\n1.INSERT BEGINNING\n2.INSERT END\n3.INSERT AT ANY POSITION\n4.DELETE AT END\n5.DELETE AT BEGINNING\n6.DELETE AT ANY POSITION\n7.DELETE AT PARTICULAR DATA\n8.REVERSE\n9.SORT\n10.DISPLAY\n11.EXIT\n");
        printf("\nENTER YOUR CHOICE: ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                head=insbeg(head);
                break;
            case 2:
                head=insend(head);
                break;
            case 3:
                head=insspec(head);
                break;
            case 4:
                head=delend(head);
                break;
            case 5:
                head=delbeg(head);
                break;
            case 6:
                head=delspec(head);
                break;
            case 7:
                head=delspecval(head);
                break;
            case 8:
                head=reverse(head);
                break;
            case 9:
                head=sort(head);
                break;
            case 10:
                head=display(head);
                break;
            case 11:
                printf("\nOPERATION EXIT\n");
                exit(0);
            default:
                printf("\nWRONG INPUT.......TRY AGAIN!\n");
                break;
        }
    }
}

NODE *insbeg(NODE *head)
{
    NODE *p,*q;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&p->data);
    if(head==NULL)
    {
        head=p;
        p->prev=NULL;
        p->next=NULL;
    }
    else
    {
        p->next=head;
        head->prev=p;
        p->prev=NULL;
        
        head=p;
    }
    return head;
}

NODE *display(NODE *head)
{
    NODE *q;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        printf("NULL<->");
        while(q!= NULL)
        {
            printf("|%d|<->",q->data);
            q=q->next;
            
        }
        printf("NULL");
    }
    return head;
}

NODE *insend(NODE *head)
{
    NODE *p,*q;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&p->data);
    if(head==NULL)
    {
        head=p;
        p->next=NULL;
        p->prev=NULL;
    }
    else
    {
        q=head;
        while(q->next!=NULL)
        {
            q=q->next;
        }
        q->next=p;
        p->prev=q;
        p->next=NULL;
    }
    return head;
}

NODE *insspec(NODE *head)
{
    NODE *p,*q,*r;
    p=(NODE*)malloc(sizeof(NODE));
    int pos,i=1;
    printf("Enter data: ");
    scanf("%d",&p->data);
    printf("Enter position: ");
    scanf("%d",&pos);
    if(head==NULL&&pos==1)
    {
        head=p;
        p->next=NULL;
        p->prev=NULL;
    }
    else
    {
        q=head;
        while(q!=NULL&&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next!=NULL&&pos==1)
        {
            p->next=head;
            p->prev=NULL;
            head=p;
        }
        else if(q->next!=NULL&&i==pos)
        {
            r->next=p;
            q->prev=p;
            p->prev=r;
            p->next=q;
        }
        else if(q->next==NULL&&i==pos)
        {
            q->next=p;
            p->prev=q;
            p->next=NULL;
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *delend(NODE *head)
{
    NODE *q,*r;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        while(q->next!=NULL)
        {
            r=q;
            q=q->next;
        }
        r->next=NULL;
        q->next=NULL;
        q->prev=NULL;
       
        printf("\nDeleted data is %d",q->data);
        
    }
    return head;
}

NODE *delbeg(NODE *head)
{
    NODE *q;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        if(head->next==NULL)
        {
            printf("Deleted data is %d",head->data);
            head=NULL;
        }
        else
        {
            q=head;
            head=head->next;
            head->prev=NULL;
            printf("Deleted data is %d",q->data);
            q=NULL;
        }
    }
    return head;
}

NODE *delspec(NODE *head)
{
    NODE *r,*q;
    int i=1,pos;
    printf("Enter position where you delete data: ");
    scanf("%d",&pos);
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        while(q->next!=NULL&&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next!=NULL&pos==1)
        {
            q=head;
            head=head->next;
            head->prev=NULL;
            printf("Deleted data is %d",q->data);
            q->prev=NULL;
            q->next=NULL;
        }
        else if(q->next!=NULL&&i==pos)
        {
            r->next=q->next;
            printf("Deleted data is %d",q->data);
            q->prev=NULL;
            q->next=NULL;
        }
        else if(q->next==NULL&&i==pos)
        {
            r->next=NULL;
            printf("Deleted data is %d",q->data);
            q->prev=NULL;
            q->next=NULL;
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *delspecval(NODE *head)
{
    NODE *q,*r;
    int i,key;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        printf("Enter data which you want delete: ");
        scanf("%d",&key);
        q=head;
        while(q->next!=NULL&&q->data!=key)
        {
            r=q;
            q=q->next;
        }
        if(head->next==NULL&&head->data==key)
        {
            printf("Deleted data is %d",head->data);
            head=NULL;
        }
        else if(head->next!=NULL&head->data==key)
        {
            q=head;
            printf("Deleted data is %d",q->data);
            head=head->next;
            head->prev=NULL;
            q=NULL;
        }
        else if(q->next!=NULL&&q->data==key)
        {
            r->next=q->next;
            printf("Deleted data is %d",q->data);
            q=NULL;
        }
        else if(q->next==NULL&&q->data==key)
        {
            r->next=NULL;
            q->prev=NULL;
            printf("Deleted data is %d",q->data);
        }
    }
    return head;
}

NODE *reverse(NODE *head)
{
    
    NODE *ptr1,*ptr2;
	ptr1=head;
	ptr2=ptr1->next;
	ptr1->next=NULL;
	ptr1->prev=ptr2;
	while(ptr2!=NULL)
	{
		ptr2->prev=ptr2->next;
		ptr2->next=ptr1;
		ptr1=ptr2;
		ptr2=ptr2->prev;
	}
	head=ptr1;
	
    printf("Reverse list\n");
    
    return head;
}

NODE *sort(NODE *head)
{
    NODE *p=head,*q;
    int temp;
    while(p->next!=NULL)
    {
        q=p->next;
        while(q!=NULL)
        {
            if(p->data>q->data)
            {
                temp=p->data;
                p->data=q->data;
                q->data=temp;
            }
            q=q->next;
        }
        p=p->next;
    }
    return head;

}