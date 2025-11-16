//Question 63
//Give an integer value , convert it to a floating point and print both

#include <stdio.h>
int main(){
    int n =12;
    printf("Original Integer value is %d \n", n);
    float number = n;
    printf("Integer value is %d \n", n);
    printf("floating value is %f\n",number);

     //explicit 
    printf("After explicit casting\n");
    printf("Float value is %f ", (float)n);//explicit
}