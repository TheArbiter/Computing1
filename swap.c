//Created by Ryan Shivashankar

#include <stdio.h>
#include <stdlib.h>
 
void swap (int* num1, int* num2);

int main (int argc, char *argv[]) {
 
  int num1,num2;
  num1 =42;
  num2 =12;
  printf ("1 is %d\n", num1);
  printf ("2 is %d\n", num2);
  swap (&num1 , &num2);
  printf (" 1 is %d\n", num1);
  printf ("2 is %d\n", num2);
 
  return EXIT_SUCCESS;
 
}
 
void swap (int* num1, int* num2) {
  int tmp = *num1; 
  *num1 = *num2;
  *num2 = tmp;
}
