#include <stdio.h>

void printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("  %d", a[i]);
    }
    printf("\n");
}

void selectionsort(int *a, int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int j;
        for (j = i + 1; j < n; j++)
        {
            if (a[j] < a[i])
            {

                int temp = a[j];
                a[j] = a[i];
                a[i] = temp;
            }
        }
    }
}

int main()
{
    int n, i;
    printf("enter the element: ");
    scanf("%d", &n);
    int a[n];
    for (i = 0; i < n; i++)
    {
        
        printf("enter the number of %d in array: ", i);
        scanf("%d", &a[i]);
    }

    printarray(a,n);
    selectionsort(a, n);
    printarray(a, n);
}