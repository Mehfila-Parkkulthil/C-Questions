//Question 26
//Create a program to check if given character is digit or not

#include <stdio.h>
#include <ctype.h>
int main(){
    printf("Lets check if your character is digit or not\n");
    char yours;
    printf("Enter your char:\n");
    scanf("%c",&yours);

    // isdigit is a function provided by ctype.h header file
    // It gives much cleaner code than
    /*
       if(yours>='0' && yours<='9')
    
    */
    if(isdigit(yours)){
        printf("Your character is a digit");
    }else{
        printf("not a digit");
    }
    return 0;
}