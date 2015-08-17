//Ryan Shivashankar
//3/13/2015
//Program determines if its a leap year
 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#define START_OF_GREG_CALENDAR 1582
 
int main (int argc, char* argv[]) {
  
  int year;
 
  printf ("please enter the year you are interested in\n");
  scanf ("%d",&year);
  
//notice this only works if the year >=1582
//because of the gregorian calendar
 
  assert (year >= START_OF_GREG_CALENDAR);
 
  if ((year%400)==0) {
    printf ("%d Is a leap year!\n",year);
  } else if ((year%100)==0) {
    printf ("%d Is not a leap year!\n",year);
  } else if ((year%4)==0) {
    printf("%d Is a leap year!\n",year);
  } else {
    printf("%d Is not a leap year!\n",year);
  }
   return EXIT_SUCCESS;
}
