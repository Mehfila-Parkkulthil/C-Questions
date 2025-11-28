/* Question105
display this AP -100,97,94 ... upto all terms are positive 
*/

#include <stdio.h>
int main(){
  int n;
  printf("Arithmetic Progression\n");
  printf("Enter your number\n");
  scanf("%d",&n);
  int a =100;
  for(int i=1; i<=n;i++){
    if(a>0){
      printf("%d ",a);
       a-=3;
      }
  }

}
