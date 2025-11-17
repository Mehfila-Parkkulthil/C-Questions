//Question 73
//Create a program to find the minimum of two numbers using ternary operator

#include <stdio.h>
int main(){
    printf("Lets find who is the bacteria \n");
    int first , second;
    printf("Enter your first number:\n");
    scanf("%d",&first);
    printf("Enter your second number:\n");
    scanf("%d",&second);

    //using ternary operator
    first>second? printf("Your second number %d is the bacteria ",second)
                 :printf("Your first number %d is the bacteria",first);

    /*

    int min =first<second?first:second;
    printf("The bacteria is %d", min);

    */
    
}