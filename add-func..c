#include<stdio.h>
int sumit(int a,int b){
    return a*b;
}
int main(){
    int a,b,c;
    scanf("%d%d",&a,&b);
    c = sumit(a,b);
    printf("%d",c);
    return 0;
}