#include<stdio.h>
void push(int*,int);
void pop(int*);
void display(int*);
int top=-1;
int main()
{
	int *s,ch,max;
	printf("enter max size of stack: ");
	scanf("%d",&max);
	
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
		    	printf("operation exit");
				break;
			default:
		    	printf("wrong input.....please try again later!!!");			
		}
		if(ch==4)
		    break;
	}
}

void push(int *s,int max)  //insert value(pop) in stack
{
	int data;
	if(top==max-1)
	{
		printf("stack is overflow");
	}
	else
	{
		top++;
		printf("enter the data: ");
		scanf("%d",&data);
		s[top]=data;
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
		printf("deleted value is %d",s[x]);
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
			printf("stack is: \n");
		for(i=top;i>=0;i--){
			printf("| %d |\n",s[i]);
		}
	}
}
