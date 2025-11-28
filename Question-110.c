/*Question110
Write a program to print odd numbers from user input using continue */

#include<stdio.h>
int main(){
  printf("Lets print odd numbers between the number you provide\n");
  int n, m;
  printf("Enter the first number: ");
  scanf("%d",&n);
  printf("Enter your second number:");
  scanf("%d",&m);
  for(int i = n; i<=m ; i++ ){
    if(i%2==0){ //even //skips
      continue;
    }
    printf("%d ",i);
  }

}