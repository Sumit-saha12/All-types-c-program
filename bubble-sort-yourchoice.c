/* SUMIT SAHA
   M.SC(DATA SCIENCE)
   BUBBLE SORT*/

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
    for (int i = 0; i < n-1; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[6];
    int i=0;
    int n = 6;
    for(i=0;i<n;i++){
    printf("enter the value of %d in array: ",i);
    scanf("%d",&a[i]);
    }
    
    printarray(a, n);
    bubblesort(a, n);
    printarray(a, n);
}
