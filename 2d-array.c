#include<stdio.h>
int main(){
    int marks[4][5]={{4,5,6,7,1},{8,9,10,11,12},{13,14,15,16,17},{18,19,20,21,22}};
    for(int i=0;i<4;i++){
        for(int j=0;j<5;j++){
           
            printf("the vaue of %d,%d in array is %d\n",i,j,marks[i][j]);
        }
    }
}