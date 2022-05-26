#include<stdio.h>

void printarray(int *,int);
void linearsearch(int *,int);

int main()
{
    int i,n;
    printf("\nEnter the no. of element: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("\nEnter the %d the position data: ",i);
        scanf("%d",&a[i]);
    }
    printf("\nThe elements are: \n");
    printarray(a,n);
    linearsearch(a,n);
}

void printarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

void linearsearch(int *a,int n)
{
    int key,i,f;
    printf("\nEnter the data which do you want search: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        if(a[i]==key)
        {
            f=1;
            break;
        }
    }
    if(f==1)
        printf("\nThe element %d is found at %d position",key,i);
    else
        printf("\nWrong input\n");
}