#include<stdio.h>

int main()  
{  
    int ct=0,n=0,i=1,j=1;  
    int sum=0;
    while(n<10)  
    {  
        j=1;  
        ct=0;  
        while(j<=i)  
        {  
            if(i%j==0)  
            ct++;  
            j++;   
        }  
        if(ct==2)  
        {  
            printf("%d ",i);
            sum=sum+i;
            n++;  
        }  
        i++;  
    }
    printf("\n\nSum of first ten prime numbers: ");
    printf("%d",sum);
} 