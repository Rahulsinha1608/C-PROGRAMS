#include<stdio.h>
int main(){
float principal,rate,time; // 4 variables create hogye
principal = 100; // in rupees
rate = 10; // in percentage
time = 2; // in years

float simple_intrest = (principal*rate*time)/100;
printf("The Intrest Is : %f",simple_intrest);

    return 0;
}