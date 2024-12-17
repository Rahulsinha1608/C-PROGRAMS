#include<stdio.h>
int main()
{
    int n;
    printf("Enter Student Percentage :");
    scanf("%d",&n);
   
    if(n>90){
        printf("A grade\n");
    }
    else{
        if(n>80)
        {
            printf("B Grade\n");
        }
    else{
            if(n>70){
                printf("C Grade\n");
        }
        else{
            if(n>60){
                printf("D Grade");
            }
            else{
                if(n>50){
                    printf("E Grade\n");
                }
                else{
                    if(n<40){
                        printf("FAIL\n");
                        }

                    }
                }
            }
        }
    }

    return 0;
}