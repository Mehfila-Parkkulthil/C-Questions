//Question 67
//Create a program to calculate compound interest

#include <stdio.h>
#include <math.h>
int main(){
   float ci , principal , time ,rate;
    printf("Pls enter your principal:\n");
    scanf("%f",&principal);
    printf("Pls enter rate of interest:\n");
    scanf("%f",&rate);
    printf("Enter time duration:\n");
    scanf("%f",&time);
    // pow(formula ,time)
    // principal * ((1 + r/100))raise to t 
    ci = principal * pow((1 + (rate/100)),time);
    printf("Coumpound interest : %f\n ", ci);
     printf("Coumpound interest : %0.2f\n ", ci);
}