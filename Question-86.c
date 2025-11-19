/*Question 86
Create a program to check if a number is palindrome or not*/

#include <stdio.h>
int main(){
  int n;
  printf("Lets check if Palindrome or not\n");
  printf("Enter your number:\n");
  scanf("%d",&n);
  int reverse =0;
  int copy =n;
  while(copy>0){
    reverse = (reverse*10) + (copy%10);
    copy/=10;
  }

  if(reverse==n){
    printf("PALINDROME");
  }else{
    printf("NOT A PALINDROME");
  }
}