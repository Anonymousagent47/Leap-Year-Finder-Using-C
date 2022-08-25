#include<stdio.h>
int main()
{
    int year;
    printf("Enter Any Year (4 Digit): ");
    scanf("%d",&year);
        if(year % 4 == 0 || year % 400 == 0){
            printf("This is Leap Year");
        }else{
            printf("This is not Leap Year");
        }
}
