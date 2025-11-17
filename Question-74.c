//Question 74
//Create a programt to calculate the absolute value of a given integer using ternary operator

#include <stdio.h>
int main(){
    printf("ABSOLUTE VALUE\n");
    int n , abs_value;
    printf("Enter your number:\n");
    scanf("%d",&n);

    //using ternary operatore
    abs_value = n > 0 ? n : -n;
    printf("%d is the absolute value \n", abs_value);
    //other way
    printf("i.e, Absolute value of %d is %d ", n , (n > 0 ? n : -n));

}