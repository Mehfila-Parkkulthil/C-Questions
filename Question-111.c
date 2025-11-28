/*Question 111
Alphabet triangle
*/

#include <stdio.h>
int main(){
  printf("Enter\n");
  for(char i=65;i<=70;i++){
 for(char j=65;j<=i;j++){
  printf("%c ",j);
 }
 printf("\n");
  }
}