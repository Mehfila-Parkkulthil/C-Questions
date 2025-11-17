//Question 75
//Create a program to based on a students score categorize as "high", "moderate", "low " using ternary operator; High for scores above 80 , moderate for 50-80 ; low for below 50;using ternary operator


#include <stdio.h>
int main(){
    printf("CATEGORY OF YOUR MARKS\n");
    int marks;
    printf("Enter your mark:\n");
    scanf("%d",&marks);

    //Using ternary 
    marks>80 ?  printf("High") 
              : (marks>=50 ? printf("Moderate") //nested ternary
                           : printf("Low"));

    return 0;
}