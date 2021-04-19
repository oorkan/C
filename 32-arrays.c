#include <stdio.h>

/*
  type arrayName[arraySize];

  The sizeof() function in C is a built-in function that is used
  to calculate the size (in bytes) that a data type occupies in ​the 
  computer’s memory. It can be applied to any data type.
  https://www.educative.io/edpresso/what-is-the-sizeof-function-in-c
  https://www.tutorialspoint.com/sizeof-operator-in-c

  To get the quantity of elements in int type array, we must divide the size
  of the array in memory to the size of one int in memory:
  sizeof(arr) / sizeof(int).
  https://www.interviewsansar.com/calculate-length-of-array-in-c/
*/

void main()
{
  int arr[50];
  int len = ( sizeof(arr) / sizeof(int) );

  printf("The given array length is %d \n", len);
}