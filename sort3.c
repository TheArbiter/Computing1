/* Ryan Shivashankar
   18/3/2015
   sort 3 Numbers in ascending order
*/
 
#include <stdio.h>
#include <stdlib.h>
 
int first,second,third;
int main (int argc, char* argv[]) {
 
  
   scanf ("%d %d %d", &first, &second, &third);
 
     if ((first < second) && (first < third) && (second < third) ) {
        printf ("%d\n%d\n%d\n" ,first,second,third);
     } else if ((first<third) && (first<second) && (third<second) ) {
        printf ("%d\n%d\n%d\n" ,first,third,second);
     } else if ((second<first) && (second<third) && (first<third) ) {
        printf ("%d\n%d\n%d\n",second,first,third);
     } else if ((third<second) && (third<first) && (second<first) ) {
        printf ("%d\n%d\n%d\n",third,second,first);
     } else if ((third<first) && (third<second) && (first<second) ) {
        printf ("%d\n%d\n%d\n",third,first,second);
     } else{
        printf ("%d\n%d\n%d\n",second,third,first);
     }
   return EXIT_SUCCESS;
}
