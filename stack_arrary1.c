#include<stdio.h>
#include<stdlib.h>
void push(int*,int);
void pop(int*);
void display(int*);
int top=-1;
int main()
{
	int max,*s,ch;
	printf("enter max size of stack: ");
	scanf("%d",&max);
	s=(int*)malloc(sizeof(int)*max);
	while(1)
	{
		printf("\n1.PUSH\n2.POP\n3.DISPLAY\n4.EXIT\n");
		printf("enter your choice: ");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:
				push(s,max);
				break;
			case 2:
				pop(s);
				break;
			case 3:
				display(s);
				break;
			case 4:
				printf("operation exit\n");
				break;
			deafult:
				printf("wrong input....try again!!!");
				break;				
		}
		if(ch==4)
		   break;
	}
}

void push(int *s,int max)
{
	if(top==max-1)
	{
		printf("stack is overflow");
	}
	else
	{
	    top++;
		printf("enter data: ");
		scanf("%d",&s[top]);
	}
}

void pop(int *s)
{
	int x;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		x=top;
		top--;
		printf("deleted data is %d",s[x]);
	}
}

void display(int *s)
{
	int i;
	if(top==-1)
	{
		printf("stack is empty");
	}
	else
	{
		for(i=top;i>=0;i--)
		{
			printf("| %d |\n",s[i]);
		}
	}
}
