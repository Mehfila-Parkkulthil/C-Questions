/*Question 91
Create a program to check if given character is digit or not 
*/

#include <stdio.h>
int main(){
  char ch;
  printf("Lets check if given character is digit or not\n");
  printf("Enter your number:\n");
  scanf("%c",&ch);
  if(ch>='0'&& ch<='9'){//if we write 12 or 3d whatever it shows as digit becoz , char only scans first digit as 1 and 3 are digit it wont consider 12 as a whole instead only look at 1.
    printf("digit");
  }else{
    printf("Not a digit");
  }
  return 0;
}