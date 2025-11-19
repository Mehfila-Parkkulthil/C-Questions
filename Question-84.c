/*Question 84
Create a program to print fibonacci series upto a number
*/

#include <stdio.h>
int main(){
  int num ;
  printf("Lets print fibonacci series\n");
  printf("Pls enter your number:\n");
  scanf("%d",&num);

  printf (" 0");
  if(num > 0){
    printf(" 1 ");
  }

  int prev =0;
  int next=1;
  while(prev+next<=num){
    int temp = prev + next;
    printf("%d ",temp);
    prev =next;
    next =temp;
  }
  return 0;
}