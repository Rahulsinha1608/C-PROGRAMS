#include<stdio.h>
int main()
{
    double x1,y1,x2,y2,x3,y3,m1,m2;
    // x is variable;
    // y is variable;
    // m is slope;
    printf("Enter Values Of X1 X2 X3 : ");
    scanf(" %f %f %f",&x1,&x2,&x3);
    printf("Enter Values Of Y1 Y2 Y3 : ");
    scanf(" %f %f %f",&y1,&y2,&y3);
    m1 =( y2 - y1 ) / (x2 - x1);
     m2 =( y3 - y2) / (x3 - x2);
     if(m1 == m2){
        printf("Given Points Lies On The Same Line.");
     }
     else{
        printf("The Given Points Does Not Lies On The Same Line.");
     }
    return 0;
}