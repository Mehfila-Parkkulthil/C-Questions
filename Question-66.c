//Question 66
//Create a program to calculate simple interest

#include <stdio.h>
int main(){
    float principal , time , rate , si;
    printf("Lets calculate simple interest \n");
    printf("Pls enter your principal:\n");
    scanf("%f",&principal);
    printf("Pls enter rate of interest:\n");
    scanf("%f",&rate);
    printf("Enter time duration:\n");
    scanf("%f",&time);
    si = (principal*rate*time)/100.0; //not need to enter 100.0 , it can automatically float
    printf("Simple Interest : %f", si);
    return 0;
}