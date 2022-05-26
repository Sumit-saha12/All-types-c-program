#include<stdio.h>
void enqueue(int*,int);
void dequeue(int*);
void display(int*);
int real=-1,front=-1;

int main()
{
	int max,ch,*q;
	printf("enter max value of queue: ");
	scanf("%d",&max);
	while(1)
	{
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
		printf("\nENTER YOUR CHOICE: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue(q,max);
				break;
			case 2:
				dequeue(q);
				break;
			case 3:
				display(q);
				break;
			case 4:
				printf("operaton exit");
				break;			
		}
		if(ch==4)
			break;	
	}	
}

void enqueue(int *q,int max)
{
	if(real==max-1)
	{
		printf("queue is overflow");
	}
	else
	{
		real++;
		printf("enter data: ");
		scanf("%d",&q[real]);
		if(real==0)
		    front=0;
	}
}

void dequeue(int *q)
{
	int x;
	if(real==-1&&front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		x=front;
		if(real==front)
		{
			real=-1;
			front=-1;
		}
		else
		{
		    front++;
		}
		printf("deleted data is %d",q[x]);
	}
}

void display(int *q)
{
    int i;
	if(real==-1&&front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<=real;i++)
		{
			printf("| %d |\t",q[i]);
		}
	}
}
