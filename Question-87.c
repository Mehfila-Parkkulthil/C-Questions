/*Question 87
Print  Pattern
1111
2222
3333
4444
5555
*/

#include <stdio.h>
int main(){
    printf("Print pattern\n");
    int r,c;
    printf("Enter rows r: \n");
    scanf("%d",&r);
    printf("Enter columns c:\n");
    scanf("%d",&c);
    for(int i =1 ; i<=r;i++){
        for(int j=1 ; j<=c;j++){
            printf("%d",i);
        }
        printf("\n");
    }
}