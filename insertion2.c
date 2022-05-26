#include<stdio.h>

void printarray(int *a,int n){
    for(int i=0;i<n;i++){
        printf("  %d",a[i]);
    }
    printf("\n");
}

void insertionsort(int *a,int n){
    for(int i=1;i<n;i++){
        int j=i-1;
        for(j>=0;j--){
            if(a[j]<a[i]){
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
}

int main(){
    int a[]={25,56,54,95,85};
    int n=5;
    printarray(a,n);
    insertionsort(a,n);
    printarray(a,n);
}