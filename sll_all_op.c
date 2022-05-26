#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;

NODE *insend(NODE*);
NODE *insbeg(NODE*);
NODE *insspec(NODE*);
NODE *insbef(NODE*);
NODE *insaft(NODE*);
NODE *delend(NODE*);
NODE *delbeg(NODE*);
NODE *delspec(NODE*);
NODE *delspecval(NODE*);
NODE *delaft(NODE*);
NODE *delbef(NODE*);
NODE *display(NODE*);
NODE *reverse(NODE*);
NODE *sort(NODE*);

int main()
{
    NODE *head=NULL;
    int ch,ch1,ch2;
    
    while(1)
    {
        printf("\n1.INSERT AT BEGINNING\n2.INSERT AT END\n3.INSERT AT ANY POSITION\n4.DELETE AT BEGINNING\n5.DELETE AT END\n6.DELETE ANY SPECIFIC POSITION\n7.DELETE AT SPECIFIC VALUE\n8.DISPLAY\n9.SORT\n10.REVERSE\n");
        printf("\n\nEnter your choice: ");
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
                printf("\n1.INSERT BEFORE NODE\n2.INSERT AFTER NODE\n3.INSERT A SPECIFIC POSITION\n");
                printf("\n\nEnter your choice: ");
                scanf("%d",&ch1);
                switch(ch1)
                {
                    case 1:
                        head=insbef(head);
                        break;
                    case 2:
                        head=insaft(head);
                        break;
                    case 3:
                        head=insspec(head);
                        break;
                    default:
                        printf("\nWrong input\n");
                        break;
                }
                break;
            case 4:
                head=delbeg(head);
                break;
            case 5:
                head=delend(head);
                break;
            case 6:
                printf("\n1.DELETE AFTER NODE\n2.DELETE BEFORE NODE\n3.DELETE A SPECIFIC POSITION");
                printf("\n\nEnter your choice: ");
                scanf("%d",&ch2);
                switch(ch2)
                {
                    case 1:
                        head=delaft(head);
                        break;
                    case 2:
                        head=delbef(head);
                        break;
                    case 3:
                        head=delspec(head);
                        break;
                    default:
                        printf("\nWRONG INPUT\n");
                        break;
                }
                break;
            case 7:
                head=delspecval(head);
                break;
            case 8:
                head=display(head);
                break;
            case 9:
                 head=sort(head);
                break;
            case 10:
                head=reverse(head);
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
        p->next=NULL;
    }
    else
    {
        p->next=head;
        head=p;
    }
    return head;
}

NODE *display(NODE *head)
{
    NODE *p;
    p=head;
    if(head==NULL)
        printf("\nEmpty list\n");
    else
    {
        while(p!=NULL)
        {
            printf("|%d|->",p->data);
            p=p->next;
           
        }
        printf("NULL\n\n");
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

NODE *insbef(NODE *head)
{
    NODE *p,*q,*r;
    int pos,i=0;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&p->data);
    printf("Enter position: ");
    scanf("%d",&pos);
    pos=pos-1;
    if(head->next==NULL)
    {
        p->next=head;
        head=p;
    }
    else
    {
        q=head;
        while(q->next!=NULL&&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next!=NULL&&pos==0)
        {
            p->next=head;
            head=p;
        }
        else if(i==pos&&q->next!=NULL)
        {
            p->next=q->next;
            q->next=p;
        }

        else if(i==pos&&q->next==NULL)
        {
            r->next=p;
            p->next=q;
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *insaft(NODE *head)
{
    NODE *p,*q;
    int pos,i=1;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&p->data);
    printf("Enter position: ");
    scanf("%d",&pos);
    
    if(head->next==NULL)
    {
        head->next=p;
        p->next=NULL;
    }
    else
    {
        q=head;
        while(q->next!=NULL&&i!=pos)
        {
        
            q=q->next;
            i++;
        }
        
        if(i==pos&&q->next!=NULL)
        {
            p->next=q->next;
            q->next=p;
        }

        else if(i==pos&&q->next==NULL)
        {
           q->next=p;
           p->next=NULL;
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *insspec(NODE *head)
{
    NODE *p,*q,*r;
    int pos,i=0;
    p=(NODE*)malloc(sizeof(NODE));
    printf("Enter data: ");
    scanf("%d",&p->data);
    printf("Enter position: ");
    scanf("%d",&pos);
    pos=pos-1;
    if(head->next==NULL)
    {
        p->next=head;
        head=p;
    }
    else
    {
        q=head;
        while(q->next!=NULL&&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next!=NULL&&pos==0)
        {
            p->next=head;
            head=p;
        }
        else if(i==pos&&q->next!=NULL)
        {
            p->next=q->next;
            q->next=p;
        }

        else if(i==pos&&q->next==NULL)
        {
            r->next=p;
            p->next=q;
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *delend(NODE * head)
{
    NODE *r,*q;
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
        printf("Deleted data is %d",q->data);
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
        q=head;
        head=q->next;
        printf("Deleted data is %d",q->data);
    }
    return head;
}

NODE *delaft(NODE *head)
{
    NODE *r,*q;
    int i=1,pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    pos=pos+1;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        while(q->next!=NULL&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(q->next!=NULL&&i==pos)
        {
            r->next=q->next;
            q->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        else if(q->next==NULL&&i==pos)
        {
            r->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}
NODE *delbef(NODE *head)
{
    NODE *r,*q;
    int i=1,pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    pos=pos-1;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        while(q->next!=NULL&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next!=NULL&&pos==1)
        {
            q=head;
            head=head->next;
            q->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        else if(q->next!=NULL&&i==pos)
        {
            r->next=q->next;
            q->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        
        else
        {
            printf("\nWRONG INPUT\n");
        }
    }
    return head;
}

NODE *delspec(NODE *head)
{
    NODE *r,*q;
    int i=1,pos;
    printf("Enter position: ");
    scanf("%d",&pos);
    
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        q=head;
        while(q->next!=NULL&i!=pos)
        {
            r=q;
            q=q->next;
            i++;
        }
        if(head->next==NULL&&pos==1)
        {
            printf("\nDeleted data is %d\n",head->data);
            head=NULL;
        }
        else if(head->next!=NULL&&pos==1)
        {
            head=head->next;
            q->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        else if(q->next!=NULL&&i==pos)
        {
            r->next=q->next;
            q->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
        }
        else if(q->next==NULL&&i==pos)
        {
            r->next=NULL;
            printf("\nDeleted data is %d\n",q->data);
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
    NODE *q,*p;
    int key;
    printf("Enter data which you want delete: ");
    scanf("%d",&key);
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        p=head;
        while(p->next!=NULL&&p->data!=key)
        {
            q=p;
            p=p->next;
        }
        if(head->next==NULL&&head->data==key)
        {
            printf("\nDeleted data is %d\n",head->data);
            head=NULL;
        }
        else if(head->next!=NULL&&head->data==key)
        {
            printf("\nDeleted data is %d\n",head->data);
            head=head->next;
        }
        else if(p->next!=NULL&&p->data==key)
        {
            q->next=p->next;
            p->next=NULL;
            printf("\nDeleted data is %d\n",key);
        }
        else if(p->next==NULL&&p->data==key)
        {
            q->next=NULL;
            printf("\nDeleted data is %d\n",key);
        }
        else
        {
            printf("\nWRONG VALUE\n");
        }
    }
    return head;
}

NODE *reverse(NODE *head)
{
    NODE *l,*p,*r,*q;
    int i=1;
    p=head;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        while(p->next!=NULL)
        {
            q=head;
            while(q->next!=NULL)
            {
                r=q;
                q=q->next;
            }
            if(i==1)
            {
                q->next=head;
                head=q;
                r->next=NULL;
                l=head;
            }
            else
            {
                q->next=l->next;
                l->next=q;
                l=l->next;
                r->next=NULL;
            }
            i++;
        }
        printf("\nLIST REVERSE\n");
    }
    return head;
}

NODE *sort(NODE *head)
{
    NODE *p=head,*q;
    if(head==NULL)
        printf("\nEMPTY LIST\n");
    else
    {
        while(p->next!-NULL)
        {
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
    }
    return head;
}