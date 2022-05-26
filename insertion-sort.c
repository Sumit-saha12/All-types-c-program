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

        key = a[i];
        int j = i - 1;
        for (j >= 0; a[j] > a[i]; j--)
        {
            a[j + 1] = a[j];
        }
        a[j + 1] = key;
    }
}
int main()
{
    int a[] = {2, 4, 85, 10, 69};
    int n = 5;

    printarray(a, n);
    insertionsort(a, n);
    printarray(a, n);
}