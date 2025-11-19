/*Question 94
Create a program to show array as function arguments
*/

#include <stdio.h>

void ask_age(int age[] , int no_of_students);
void print_age(int age[], int no_of_students); 
//Function Prototype

int main(){
  int age[5];
  int no_of_students =5;
  //call function
  ask_age(age,no_of_students);
  print_age(age, no_of_students);
  return 0;
}

void ask_age(int students_age[] , int count_of_students){
  //function definition
  for(int i=0;i<count_of_students;i++){
    printf("Please enter your age: \n");
    scanf("%d",&students_age[i]);
  }
}

void print_age(int kutty_age[] , int no_students){
  //function definition
  printf("So age of students are ");
  for(int i=0;i<no_students;i++){
    printf(" %d ",kutty_age[i]);
  }
}

