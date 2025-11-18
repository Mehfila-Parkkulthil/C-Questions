//Question 77
//Create a program  using switch to create a simple calculator that uses a switch statement to perform basic arithmetic operations like addition , subtraction , multiplication and division.

#include <stdio.h>
int main(){
    printf("CALCULATOR\n");
    float first ,second;
    printf("Enter your number:\n");
    scanf("%f",&first);
    printf("Enter your second number:\n");
    scanf("%f",&second);

    char operator;

    printf("Now enter which arithmetic operation you want to conduct\n");
    printf("Enter (+ , - , * , / ) : ");
    scanf("%c",&operator);
    int invalid =0;
    switch (operator){
    case '+': printf("Sum is %f ", first+second);
    break;
    case '-': printf("Difference is %f ", first-second);
    break;
    case '*': printf("Product is %f", first*second);
    break;
    case '/': printf("Quotient is %f", first/second);
    break;
    default:
    invalid =1;
    printf("Invalid operation");
    break;
    }
    if(invalid==0){
        printf("Thank you");
    }
}
