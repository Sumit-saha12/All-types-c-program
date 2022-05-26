#include<stdio.h>

int
 insertionsort(int *a,int);

int main()
{
    int n,i;
    printf("Enter max size of array: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("Enter the data: ");
        scanf("%d",&a[i]);
    }
    printf("\nArray: \n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);
    
    insertionsort(a,n);
}

int insertionsort(int *a,int n)
{
    int i,j,c,t;
    
    for(i=1;i<=n-1;i++)
    {
        c=i-1;
        t=a[i];
        while(c>=0&&a[c]>t)
        {
            a[c+1]=a[c];
            c--;
        }
        a[c+1]=t;
    }
    printf("\nSorted array: \n");
    for(i=0;i<n;i++)
        printf("%d  ",a[i]);

    return n;
}