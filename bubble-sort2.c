#include <stdio.h>
int printarray(int *a, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf(" %d", a[i]);
    }
    printf("\n");
}

void bubblesort(int *a, int n)
{
    int temp;
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}
int main()
{
  
    int i = 0;
    int n;
    char b;
    end:
    printf("enter your choice yes or no(y/n): ");
    scanf("%s", &b);
    if (b == 'y')
    {

        while (1)
        {
            printf("enter the size of array: ");
            scanf("%d", &n);
            int a[n];
            for (i = 0; i < n; i++)
            {
                printf("enter the value of %d in array: ", i);
                scanf("%d", &a[i]);
            }

            printarray(a, n);
            bubblesort(a, n);
            printarray(a, n);
            goto end;
        }
    }
    else{
        printf("quit the program\n");
       
    }
}
