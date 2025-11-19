/*Question 95
Create a program to calculate the sum of elements in array
*/

#include <stdio.h>

//Function prototype
int sumOfArray(int arr[],int size);

int main(){
  int myArray[]={1,2,4,5,3};
  int size = sizeof(myArray) / sizeof(myArray[0]); //or int size = 5;
  //Pass array and size to the function
  int total = sumOfArray(myArray,size);
  printf("The sum of array elements are :%d",total);
  return 0;
}

//Function to calculate the sum of an arrays elements

int sumOfArray(int arr[],int size){
  int sum=0;
  for(int i=0;i<size;i++){
    sum+= arr[i];
  }
  return sum;
  //return the sum
}

/*sizeof(myArray) = means total bytes of array
if, int = 4 bytes , then size of myArray is 20 .

sizeof(myArray[0]) means size of one element ,ie, 4 bytes.

dividing gives number of elements = 20/4 = 5 elments */