/*Question 88
Print 
11111
12111
11311
11141
11115
*/

#include <stdio.h>
int main(){
  int n;
  printf("Lets print the pattern above\n");
  for(int i=1;i<=5;i++){
    for(int j=1;j<=5;j++){
       if(i!=j){
       printf("%d",1);
    }else{
      printf("%d",j);
    }
  }
  printf("\n");

 }}
