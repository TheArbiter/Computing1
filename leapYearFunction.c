//Ryan Shivashankar
//3/13/2015
//Program shows if year is Leap Year
// test cases to find out if Leap Year
//4000 - yes
//1999-no
//4004-yes
//1900-no
//1904-yes
//2000-yes
//100000-yes
 
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
#define START_OF_GREG_CALENDAR 1582
int isLeapYear(int year);
int (year);
int (oneorzero);

int main (int argc,const char* argv[]) {
 
  int year;
  int oneorzero = 0;
  printf ("please enter any year after 1582\n");
  scanf ("%d",&year);
 
//notice this only works if the year >=1582
//because of the gregorian calendar
 
  assert (year >= START_OF_GREG_CALENDAR);
  printf("%d", oneorzero);
   
  return EXIT_SUCCESS;
}
 
int isLeapYear(int year) {
 
 if ((year%400)==0) {
     oneorzero = 1;
   } else if ((year%100)==0) {
     oneorzero= 0;
   } else if ((year%4)==0) {
     oneorzero = 1;
   } else {
     oneorzero = 0;
   }
  
  return oneorzero;
}
 
