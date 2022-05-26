#include<stdio.h>

void printarray(int *a,int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d",a[i]);
    };
    printf("\n");
}

void selectionsort(int *a,int n){
    int i,j,m,max;
    m=0;
    max=a[0];
    for(i=0;i<n-1;i++){
        for(j=0;j<n-i;j++){
            int m=0;
            max=a[0];
            if(a[j]>max){
                max=a[j];
                m=j;
            }
        }
        if((j-1)!=m){
            int temp=a[m];
            a[m]=a[j-1];
            a[j-1]= temp;
        }
    }
}


int main(){
    int a[]={1,6,5,3,7,8,2,4};
    int n=8;
    int i,j,m,max;

    printarray(a,n);
    selectionsort(a,n);
    printarray(a,n);
}