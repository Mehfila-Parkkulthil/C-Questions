//Question 64
//Create a program to calculate the product of two floating points numbers

#include <stdio.h>
int main(){
    float a , b;
    printf("Enter your first number : \n");
    scanf("%f", &a);
    printf("Enter your second number : \n");
    scanf("%f",&b);
    printf("So the product of your numbers are : %f\n", a*b);
    printf("So the product of your numbers after rounding off are : %.2f", a*b);
    //to roundoff to two digits write .2f
    return 0;

}