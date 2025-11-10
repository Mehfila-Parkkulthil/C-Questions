//Question 8
// Write a program to calculate area and perimeter of rectangle.Take sides a and b from the user.

#include <stdio.h>
int main(){
    float a ,b;
    printf("Lets calculate area and perimeter of rectangle\n");
    printf("Enter length (a): \n");
    scanf("%f",&a);
    printf("Enter breadth (b): \n");
    scanf("%f",&b);
    float area = a*b;
    float perimeter = 2*(a+b);
    printf("_____________________________________ \n");
    printf("Area : %f \n", area);
    printf("Perimeter : %f \n", perimeter);
    printf("_____________________________________ \n");
}