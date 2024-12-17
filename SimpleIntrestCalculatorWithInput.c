#include<stdio.h>
int main(){
    float Principal;
    printf("The Principal Amount Is : \n");
    scanf("%f",&Principal);
    float Rate;
    printf("The Rate Per Anum Is : \n");
scanf("%f",&Rate);
float Time;
printf("The Time Period Is : \n");
scanf("%f",&Time);
float Simple_Intrest;
Simple_Intrest = (Principal*Rate*Time)/100;
printf("The Simple Intrest Is : %f",Simple_Intrest);
return 0;



}