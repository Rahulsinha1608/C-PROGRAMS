#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter The Coordinates : ");
    scanf("%d %d",&x,&y);
    if(x==0 && y==0){
        printf("Point Lies On Origin.");
    }
    else if(y==0){
        printf("Point Lies On X-axis.");
    }
    else if (x==0){
        printf("Point lies On Y-axis.");
    }
    else{
        printf("The Point Neither Lies On x or y-axis.");
    }
    return 0;
}