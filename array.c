#include<stdio.h>
int main(){
    int a,n;
    int marks[5];
    for(n=0;n<5;n++){
        printf("enter the number %d in array ",n);
        scanf("%d",&marks[n]);
    }
    for(n=0;n<5;n++){
        printf("the value of %d element of array is %d\n",2,marks[2]);
    }
}