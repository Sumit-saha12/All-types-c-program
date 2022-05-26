#include<stdio.h>
int main(){
    int a,n;
    printf("enter the value: ");
    scanf("%d",&n);
    for(a=0;a<=n;a++){
        if(a%2==1){
            printf("%d\n",a);
        }
        else
        continue;
    }
}