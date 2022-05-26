#include<stdio.h>

void printarray(int *,int);
void binarysearch(int *,int);
int bubblesort(int *,int);

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
    bubblesort(a,n);
    printf("The sorted elements are: \n");
    printarray(a,n);
    binarysearch(a,n);
}

void printarray(int *a,int n)
{
    int i;
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
}

int bubblesort(int *a,int n)
{
    int i,j,temp;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
        {
            if(a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
    return n;
}

void binarysearch(int *a,int n)
{
    int l=0,u=n-1,m,key,f=0;
    printf("\nEnter the search element: ");
    scanf("%d",&key);
    m=l+u/2;
    while(l<=u)
    {
        m=l+u/2;
        if(a[m]==key)
        {
            f=1;
            break;
            
        }
        else if(a[m]<key)
            l=m+1;
        else
            u=m-1;
    }
    if(f==1)
        printf("\nThe element %d is found at %dth pos.",key,m);
    else
        printf("\nWrong input\n");

}
