#include<stdio.h>
void enqueue(int*,int);
void dequeue(int*);
void display(int*);
int rear=-1,front=-1;
int main()
{
	int *s,ch,max;
	printf("enter max size of queue: ");
	scanf("%d",&max);
	
	while(1)
	{
		printf("\n1.ENQUEUE\n2.DEQUEUE\n3.DISPLAY\n4.EXIT\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				enqueue(s,max);
				break;
		  	case 2:
				dequeue(s);
				break;
			case 3:
		    	display(s);
				break;
			case 4:
		    	printf("operation exit");
				break;
			default:
		    	printf("wrong input.....please try again later!!!");			
		}
		if(ch==4)
		    break;
	}
}

void enqueue(int *s,int max)  //insert value(pop) in stack
{
	int data;
	if(rear==max-1)
	{
		printf("queue is overflow");
	}
	else
	{
		rear++;
		printf("enter the data: ");
		scanf("%d",&data);
		s[rear]=data;
		if(rear==0)
		    front=0;
	}
}

void dequeue(int *s)
{
	int x;
	if(rear==-1&&front==-1)
	{
		printf("queue is empty");
	}
	else
	{
	    x=front;
	    if(rear==front)
	    {
	        rear=-1;
	        front=-1;
	    }
	    else
	    {
	        front++;
	    }
	    printf("deleted data is: %d",s[x]);
	}
}

void display(int *s)
{
	int i;
	if(rear==-1&&front==-1)
	{
		printf("queue is empty");
	}
	else
	{
		printf("queue is: \n");
		for(i=front;i<=rear;i++){
			printf("| %d |\t",s[i]);
		}
	}
}
