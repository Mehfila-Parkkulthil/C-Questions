//Question 10
// Create a program to calculate cube of number using pow().

#include <stdio.h>
#include <math.h>
int main(){
    int n;
    printf("Enter a number you want to calculate cube:\n");
    scanf("%d",&n);
    int _power = pow(n,3);
    // n raise to 3 ---> pow(n,3);
    printf("Cube : %d \n", _power);
    return 0;
}