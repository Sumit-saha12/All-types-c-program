#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *next;
};
typedef struct node NODE;
void ins_beg();
void ins_end();
void ins_after_node();
void ins_bef_node();
void ins_spec_pos();
void display();
NODE *head = NULL;


int main()
{
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	int ch,opt;
	while(1)
	{
	    printf("\n1.insert at beg.\n2.insert at end\n3.insert at any pos.\n4.display\n5.exit\n");
	    printf("enter your choice: ");
	    scanf("%d",&ch);
	    switch(ch)
	    {
	    	case 1:
		    	ins_beg();
		    	break;
		    case 2:
			    ins_end();
			    break;
		    case 3:
		    	printf("\n1.insert after node\n2.insert before node\n3.insert specific pos.\n");
		    	printf("\nenter your choice: ");
		    	scanf("%d",&opt);
		    	switch(opt)
			    {
			    	case 1:
			    		ins_after_node();
			    		break;
			    	case 2:
			    		ins_bef_node();
			    		break;
			    	case 3:
				    	ins_spec_pos();
				    	break;
		    	}
		    	break;
		    case 4:
		    	display();
		    	break;
		    case 5:
			    printf("\noperation exit\n");
		    	exit(1);
	    	default:
		    	printf("\nwrong input........please try again!!!!!!\n");
		    	break;
	    }
	}
}

void ins_beg()
{
	NODE *p;
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter the data: ");
	scanf("%d",&p->data);
	if(head==NULL)
	{
		head=p;
		head->next= NULL;
	}
	else
	{
		p->next = head;
		head=p;
	}
}

void ins_end()
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	printf("enter the data: ");
	scanf("%d",&p->data);
	if(head==NULL)
	{
		head=p;
		head->next= NULL;
	}
	else
	{
		q=head;
		while(q->next!=NULL)
		{
			q=q->next;
		}
		q->next = p;
		p->next = NULL;
	}
}

void ins_after_node()
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	int i=1,pos;
	q=head;
	printf("enter the data: ");
	scanf("%d",&p->data);
	printf("enter position: ");
	scanf("%d",&pos);
	while(i!=pos&&q->next!=NULL)
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
		printf("position not exist\n");
	}
	
}

void ins_bef_node()
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	int i=1,pos;
	q=head;
	printf("enter the data: ");
	scanf("%d",&p->data);
	printf("enter position: ");
	scanf("%d",&pos);
	pos=pos-1;
	if(head->next==NULL)
	{
		p->next=head;
		head=p;
	}
	else
	{
		while(i!=pos&&q->next!=NULL)
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
			printf("position not exist\n");
		}
	}
}

void ins_spec_pos()
{
	NODE *p,*q;
	p=(NODE*)malloc(sizeof(NODE));
	int i=1,pos;
	q=head;
	printf("enter the data: ");
	scanf("%d",&p->data);
	printf("enter position: ");
	scanf("%d",&pos);
	pos=pos-1;
	if(head->next==NULL)
	{
		p->next=head;
		head=p;
	}
	else
	{
		while(i!=pos&&q->next!=NULL)
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
			printf("position not exist\n");
		}
	}
}

void display()
{
	NODE *q=head;
	while(q!=NULL)
	{
		printf("|%d|->",q->data);
	
		if(q->next==NULL)
		{
		    printf("NULL");
		}
		q=q->next;
	}
}
