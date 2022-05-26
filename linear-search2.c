#include<stdio.h>
int main(){
    int n,i,key,f=0;
    printf("enter array length: ");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++){
        printf("enter the %d th value: ",i);
        scanf("%d",&a[i]);
    }
    printf("enter the search element: ");
    scanf("%d",&key);
    for(i=0;i<n;i++){
        if(a[i]==key){
            f=1;
            break;
        }
    }
    if(f==1){
        printf("the index of %d is %d",key,i);
    }
    else{
        printf("your element is not found");
    }
}