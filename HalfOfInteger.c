#include<stdio.h>
int main(){
    float x;
    scanf("%f",&x);
    printf("Input : %f\n",x);
    
    int y = x;
    printf("The Integer Part Is : %d\n",y);
    float z = x-y;
    printf("The Fractional Part Is : %f\n",z);
     
    return 0;
}