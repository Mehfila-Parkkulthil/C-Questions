/*Question 102
Print the AP -1,3,5,6,9...upto n terms*/

#include <stdio.h>
int main(){
  printf("Arithmetic Progression\n");
  int n;
  printf("Enter your number\n");
  scanf("%d",&n);

  for(int i=1;i<=(2*n)-1;i+=2){
    printf("%d ",i);
  }

}
