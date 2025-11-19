/*Question 93
Create a program using array to collect marks of 10 students and print their marks (Array Traversal)*/

#include <stdio.h>
int main(){
  printf("Lets check marks of 10 students\n");
  //int marks[5];
  //int marks1 , marks2, marks3 ,marks4 and marks5 is equal to int marks[5];
  int marks[10]; //declaration 

  for(int i=0;i<10;i++){ //for output
    printf("Enter the student %d marks : \n",i+1);
    scanf("%d",&marks[i]);
  }

  for(int i=0 ; i<10;i++){ //input
    printf("Marks of student %d is %d\n", (i+1),(marks[i]));
  }
  return 0;
}