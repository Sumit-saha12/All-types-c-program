#include <stdio.h>
void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d", a[i]);
    }
    printf("\n");
}

void insertionsort(int *a, int n)
{
    int j;
    int key;

    for (int i = 1; i <= n - 1; i++)
    {
        key= a[i];
        int j=i-1;
        for (j>=0; a[j] > key; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
}
int main()
{
    int i,n;
   
    printf("enter the element: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        printf("enter the value of %d in array: ", i);
        scanf("%d", &a[i]);
    }

    printarray(a, n);
    insertionsort(a, n);
    printarray(a, n);
}