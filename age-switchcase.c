#include<stdio.h>
int main(){
    int age;
    printf("enter your age: ");
    scanf("%d",&age);
    switch(age){
        case 14:
        printf("the age is 14\n");
        break;
        case 89:
        printf("the age is 89\n");
        break;
        default:
        printf("not valid\n");
        break;

        
    }
    return 0;
}