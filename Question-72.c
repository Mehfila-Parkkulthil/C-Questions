//Question 72
/*

Create a program that calculates grades based on marks
A- above 90%
B-above 75%
C-above 60%
D-above 30%
Fail-below 30%

*/

#include <stdio.h>
int main(){
    printf("GRADE CALCULATOR\n");
    printf("Enter your marks : \n");
    int marks;
    scanf("%d", &marks);
    if(marks>100 || marks<0){
        printf("Invalid marks.");
    }else if(marks>=90 && marks <=100){
        printf("Congrats ! A Grade");
    }else if(marks>=75){
        printf("Excellent ! B Grade");
    }else if(marks>=60){
        printf("Good Job ! C Grade");
    }else if(marks>=30){
        printf("Need to Improve ! D Grade");
    }else {
        printf("Failed !!");
    }
}