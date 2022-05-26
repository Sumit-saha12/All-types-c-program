#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("   %d", a[i]);
    }
    printf("\n");
}

void linearsearch(int *a, int n)
{
    int b;
    int sumit = 0;
    int i;

    printf("what do you want you search: ");
    scanf("%d", &b);

    for (int i = 0; i < n; i++)
    {
        if (a[i] == b)
        {
            printf("index %d\n", i);
            sumit++;
        }
    }

    if (sumit == 0)
    {
        printf("element doesn't exist\n");
    }
}
int main()
{
    int n, i;
    printf("enter element: ");
    scanf("%d",&n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        
        printf("enter the value of %d in array: ",i);
        scanf("%d", &a[i]);
    }

    printarray(a, n);
    linearsearch(a, n);
}