//Question 70
//Create a program that determines the greatest of the three numbers

#include <stdio.h>
int main(){
    int first , second ,third;
    printf("Lets check who is the elephant\n");
    printf("Enter your first number:\n");
    scanf("%d",&first);
    printf("Enter your second number:\n");
    scanf("%d",&second);
    printf("Enter your third number:\n");
    scanf("%d",&third);
    //This works for negative numbers also
    if(first >second && first >third){
        printf("%d is greator ie, your first number .\n", first);
    }else if(second>third){
        printf("%d is greator i.e, your second number\n", second);
    }else{
        printf("%d is greator i.e, your third number\n", third);
        }
    return 0;
}