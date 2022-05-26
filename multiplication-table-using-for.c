#include<stdio.h>
int main(){
    int a,n;
    printf("enter the value you want multiplication table of: ");
    scanf("%d",&a);
    printf("table of %d:\n",a);
    for(n=1;n<=10;n++){
        printf("%d * %d = %d\n",a,n,a*n);
    }
}