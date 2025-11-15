/*Question 56
Pointer arithmetic 
*/

#include <stdio.h>
int main(){
    printf("Lets try with int\n");
    int age =11;
    int *ptr =&age;
    printf("ptr = %u\n",ptr);
    ptr++;
    printf("ptr=%u\n",ptr);
    ptr--;
    printf("ptr=%u\n",ptr);
    ptr+=2;
    printf("ptr=%u\n",ptr);

    printf("Lets try with float\n");
    float price =100.0;
    float *ftr =&price;
    printf("ftr = %u\n",ftr);
    ftr++;
    printf("ftr=%u\n",ftr);
    ftr--;
    printf("ftr=%u\n",ftr);
    ftr+=2;
    printf("ftr=%u\n",ftr);

     printf("Lets try with char\n");
    char star='*';
    char *ctr =&star;
    printf("ctr = %u\n",ctr);
    ctr++;
    printf("ctr=%u\n",ctr);
    ctr--;
    printf("ctr=%u\n",ctr);
    ctr+=2;
    printf("ctr=%u\n",ctr);
    return 0;
}