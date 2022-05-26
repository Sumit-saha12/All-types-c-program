#include<stdio.h>
int main(){
    int pass;
    printf("\n1 if you pass science only,\n2 if you pass math only,\n3 if you pass science and math both\n");
    printf("\nput value: ");
    scanf("%d",&pass);
    if(pass==1){
        printf("you got 15 rs.");
    }
    else if(pass==2){
        printf("you got 15 rs.");
    }
    else{
        printf("you got 45 rs.");
    }
}