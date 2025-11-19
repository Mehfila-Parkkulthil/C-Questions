/*Question 85
Create a program to check if a number is Armstrong number or not*/

#include<stdio.h>
int main(){
  printf("Lets check if the number is Armstrong number or not\n");
  int n;
  printf("Enter your number\n");
  scanf("%d",&n);

  int sum =0;
  int copy =n;
  while(copy>0){
    int digit =copy %10;
    sum += digit *digit *digit;
    copy/=10;
  }

  if(sum==n){
    printf("The number %d is a Armstrong number.\n",n);
  }else{
    printf("The number is not armstrong \n");

  }
  return 0;

}