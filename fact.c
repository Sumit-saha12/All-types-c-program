#include<stdio.h>
int main(){
    int a,b=1,c;
    printf("enter the number: ");
    scanf("%d",&c);
    for(a=1;a<=c;a++){
        b=b*a;
    }
    printf("the factorial is: %d",b);
    return 0;

}