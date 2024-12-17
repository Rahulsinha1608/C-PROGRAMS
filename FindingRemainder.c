#include<stdio.h>
int main(){
    int a;
    printf("The First Number : "); // a > b
    scanf("%d",&a);
    int b;
    printf("The Second Number Is : ");
    scanf("%d",&b);
int q = a/b;
int r = a - (b*q);
printf("The Remainder Found Is : ",r);

    return 0;
}