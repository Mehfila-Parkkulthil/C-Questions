//Question 61
//Create a program to swap two numbers

#include <stdio.h>
int main(){
    int n ,m , t;
    printf("Enter your first number : \n");
    scanf("%d",&n);
    printf("Enter your second number:\n");
    scanf("%d",&m);
    t=n;
    n=m;
    m=t;
    printf("So after switching your first number is %d and second number is %d",n,m);

      return 0;
}