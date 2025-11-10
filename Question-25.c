//Question 25
//Create a program to print the average of 3 numbers

#include <stdio.h>
#include <math.h>
int main(){
    printf("Lets calculate average\n ");
    int a,b,c;
    printf("Enter your first number : \n");
    scanf("%d",&a);
    printf("Enter your second number:\n");
    scanf("%d",&b);
    printf("Enter your third number:\n");
    scanf("%d",&c);
    printf("\n");
    printf("Average of 3 numbers is : %d",(a+b+c)/3);
    return 0;

}