/*Question 103
Print the AP -4,7,13,16,19...upto n terms*/

#include <stdio.h>
int main(){
  printf("Arithmetic Progression\n");
  int n;
  printf("Enter your number\n");
  scanf("%d",&n);

  int a =4;
  for(int i=1;i<=n;i++){
    printf("%d ",a);
    a+=4;
  }

}