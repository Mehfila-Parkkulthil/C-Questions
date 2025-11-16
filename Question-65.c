//Question 65
//CReate a program to calculate area of a triangle

#include <stdio.h>
int main(){
    int breadth ,height ;
    float area;
    printf("Lets calculate area of a triangle \n");
    printf("Enter breadth :\n");
    scanf("%d",&breadth);
    printf("Enter height: \n");
    scanf("%d",&height);
    area = (breadth * height)/2;
    printf("Area of your triangle is : %f\n",area);
    printf("Area of your triangle after rounding off is : %0.2f",area);
    return 0;
}