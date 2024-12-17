#include<stdio.h>
int main(){
    int a;
    printf("Write The First Digit : ");
    scanf("%d",&a);
    int b;
    printf("Write The Second Digit : ");
    
    scanf("%d",&b);
    int c;
    printf("Write The Second Digit : ");
    
    scanf("%d",&c);
   
    printf("The Three Digit Number So Formed Is : %d,%d,%d\n",a ,b ,c);
    int sum = a + b + c;
    printf("The Sum Of Te Given Numbers Is : %d",sum);

    return 0;

}