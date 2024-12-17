#include<stdio.h>
int main(){
    float m1 = 33; // maths marks

    float m2 = 40; // physics marks
    float m3 = 39; // chemistry marks  
    float m4 = 38; // computer marks
    float average = (m1 + m2 + m3 + m4 )/4;
    float percentage = average /40*100;

    printf("The Required Percentage Is : %f",percentage);

    return 0;
}