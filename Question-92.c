/*Question 92
Create a program using array to collect marks of 5 students*/

#include <stdio.h>
int main(){
  printf("Lets check marks of 5 students\n");
  // int marks[5];
  //int marks1 , marks2, marks3 ,marks4 and marks5 is equal to int marks[5];
  int marks[5]={89,23,78,98,90}; //declaration and intialisation 
  for(int i=0 ; i<5;i++){
    printf("Marks of student %d is %d\n", (i+1),(marks[i]));
  }
  return 0;
}