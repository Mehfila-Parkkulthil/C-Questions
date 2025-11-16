//Question 62
//Create a program that takes two numbers and shows result of all arithmetic operators

#include <stdio.h>
int main(){
   int n , m;
    printf("Enter your first number:\n");
    scanf("%d", &n);
    printf("Enter your second number:\n");
    scanf("%d",&m);
    printf("Lets calculate\n");
    printf("Sum : %d \n", n+m);
    printf("Product : %d \n",n*m);
    printf("Difference(first-second) :%d\n",n-m);
    printf("Quotient : %d\n", n/m);
    printf("Reminder : %d", n%m);
    return 0;
}