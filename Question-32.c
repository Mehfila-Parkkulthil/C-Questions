//Question 32
//Create a program using switch conditional operator to write day of a week

#include <stdio.h>
int main(){
  char day;
  printf("\n");
  printf(" m- mon , t-tues , w-wed , T-thurs , f-fri , s-sat ,S-sun\n");
printf("\n");
  printf("Enter day(write the first letter of your day you want):\n");
  scanf("%s", &day);
  switch(day){
    case 'm' : printf("monday \n");
            break;  
    case 't' : printf("tuesday \n");
            break;  
    case 'w' : printf("wednesday \n");
            break; 
    case 'T' : printf("thursday \n");
            break; 
    case 'f' : printf("friday \n");
            break;  
    case 's' : printf("saturday \n");
            break;  
    case 'S' : printf("sunday \n");
            break;  
    default :printf("Not  a valid day\n");

  }
  return 0;

}