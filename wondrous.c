// Edited by Ryan Shivashankar
// Prints the Wondrous Sequence 

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#define STOP_NUMBER 1
 
int printWondrous (int start);
void testWondrous (void);
 
int main (int argc, char *argv[]){
   testWondrous ();
   /*int number;
   scanf ("%d", &number);
   printWondrous(number);
   */
 
   return EXIT_SUCCESS;
}
 
int printWondrous (int start) {
 
   int count =1;
   int number = start;
   //printf ("%d ", number);
 
   while (number != STOP_NUMBER) {
      printf ("%d ", number);
      if ((number%2) == 0){
         number = number/2;
      } else {
         number = (number*3 + 1);
      }
      count++;
   }
       printf ("%d\n", number);
     //printf ("Number of terms: %d\n" ,count);
 
    return count;
}
 
void testWondrous (void){
 
   assert(printWondrous(1)==1);
   assert(printWondrous(2)==2);
   assert(printWondrous(4)==3);
   assert(printWondrous(8)==4);
   assert(printWondrous(16)==5);
   assert(printWondrous(5)==6);
   assert(printWondrous(10)==7);
   assert(printWondrous(3)==8);
   //printf("All tests passed.\n");
 
}
