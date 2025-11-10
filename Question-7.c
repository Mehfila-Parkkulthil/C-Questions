//Question 7
// Write a program to calculate area and perimeter of circle

#include<stdio.h>
int main(){
    float radius;
    printf("Lets calculate area and perimeter of circle \n");
    printf("Enter radius:\n");
    scanf("%f" , &radius);
    float area = radius*3.14*radius;
    float perimeter = 2*3.14*radius;

    printf("-------------------------------\n");
    printf("Area : %f \n",area );
    printf("Perimeter : %f \n ", perimeter);
    return 0;

}