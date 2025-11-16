//Question 7
// Write a program to calculate area and perimeter of circle

#include<stdio.h>
int main(){
    float radius;
    const float PI = 3.14;//whenever declaring const in uppercase

    printf("Lets calculate area and perimeter of circle \n");
    printf("Enter radius:\n");
    scanf("%f" , &radius);
    float area = radius*PI*radius;
    float perimeter = 2*PI*radius;

    printf("-------------------------------\n");
    printf("Area : %f \n",area );
    printf("Perimeter : %f \n ", perimeter);
    return 0;

}