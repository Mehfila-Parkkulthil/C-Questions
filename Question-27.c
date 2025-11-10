//Question 27
//Write a program to print the smallest number

#include <stdio.h>
int main(){
    printf("Lets check which is smallest \n");
    int a,b,c;
    printf("Enter your first number : \n");
    scanf("%d",&a);
    printf("Enter your second number:\n");
    scanf("%d",&b);
    printf("Enter your third number:\n");
    scanf("%d",&c);
    printf("\n");
    if(a>b && c>b){
        printf("The smallest number : %d \n",b);
    }else if(a>c && b>c) {
        printf("The smallest number: %d \n",c);
    }else{
        printf("The smallest number : %d \n",a);
    }
    return 0;
  
}