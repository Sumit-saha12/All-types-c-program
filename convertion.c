#include<stdio.h>
int main(){
 
    /* kmstomiles
       inchestofoot
       cmstoinches
       poundtokgs
       inchestometers*/
    char input;
    float first,second;

    while(input != 'q'){
        printf("enter input:\n  1. kms to miles\n  2. inches to foot\n  3. cms to inches\n  4. pound to kgs\n  5. inches to meters\n  q. quit\n");
        scanf("\n%c",&input);
        switch (input)
        {
        case '1':
            printf("enter first value: ");
            scanf("%f",&first);
            second = first*0.621371;
            printf("%f kms is equal to %f miles\n",first,second);
            break;
        case '2':
            printf("enter first value: ");
            scanf("%f",&first);
            second = first*0.0833333;
            printf("%f inches is equal to %f foot\n",first,second);
            break;
        case '3':
            printf("enter first value: ");
            scanf("%f",&first);
            second = first*0.393701;
            printf("%f cms is equal to %f inches\n",first,second);
            break;
        case '4':
            printf("enter first value: ");
            scanf("%f",&first);
            second = first*0.453592;
            printf("%f pound is equal to %f kgs\n",first,second);
            break;
        case '5':
            printf("enter first value: ");
            scanf("%f",&first);
            second = first*0.0254;
            printf("%f inches kms is equal to %f meters\n",first,second);
            break;
        case 'q':
            printf("quit\n");
            break;
         }
    }
    
    return 0;
}