/*Question 89
Create a program to input two numbers at a same time*/


#include<stdio.h>
int main(){
    int first ,second , third , fourth;
    printf("Enter your first and second number : \n ");
    scanf("%d , %d" ,&first , &second); //while input use comma
    printf("Enter your first and second number : \n ");
    scanf("%d %d" ,&third , &fourth);//while input dont use comma becoz no comma between %d and%d;
    printf("Your first two numbers are %d and %d\n",first , second);
    printf("Your third and fourth numbers are %d and %d", third , fourth);

}