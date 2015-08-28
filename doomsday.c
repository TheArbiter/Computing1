/*
*  doomsday.c
*  A program to test a function dayOfWeek which determines which
*  day of the week a particular date falls on.
*  (only for dates after the start of the Gregorian calendar).
*
*  Program stub created by Richard Buckland on 17/03/14
*  This program was edited by Ryan Shivashankar
*  Assignment 1
*  Freely licensed under Creative Commons CC-BY-3.0
*
*
*/

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#define THURSDAY 0
#define FRIDAY   1
#define SATURDAY 2
#define SUNDAY   3
#define MONDAY   4
#define TUESDAY  5
#define WEDNESDAY 6

#define TRUE 1
#define FALSE 0
#define DAYS_PER_WEEK 7

#define START_OF_GREG_CALENDAR 1582

int dayOfWeek (int doomsday, int leapYear, int month, int day);

int main (int argc, char *argv[]) {
   assert (dayOfWeek (THURSDAY,  FALSE,  4,  4) == THURSDAY);
   assert (dayOfWeek (FRIDAY,    FALSE,  6,  6) == FRIDAY);
   assert (dayOfWeek (MONDAY,    FALSE,  8,  8) == MONDAY);
   assert (dayOfWeek (WEDNESDAY, FALSE, 10, 10) == WEDNESDAY);
   assert (dayOfWeek (FRIDAY,    FALSE, 12, 12) == FRIDAY);
   assert (dayOfWeek (THURSDAY,  FALSE,  9,  5) == THURSDAY);
   assert (dayOfWeek (FRIDAY,    FALSE,  5,  9) == FRIDAY);
   assert (dayOfWeek (SUNDAY,    FALSE,  7, 11) == SUNDAY);
   assert (dayOfWeek (TUESDAY,   FALSE, 11,  7) == TUESDAY);
   assert (dayOfWeek (WEDNESDAY, FALSE,  3,  7) == WEDNESDAY);

   assert (dayOfWeek (THURSDAY,  FALSE,  4,  5) == FRIDAY);
   assert (dayOfWeek (SATURDAY,  FALSE,  6,  5) == FRIDAY);
   assert (dayOfWeek (MONDAY,    FALSE,  8,  9) == TUESDAY);
   assert (dayOfWeek (WEDNESDAY, FALSE, 10,  9) == TUESDAY);
   assert (dayOfWeek (FRIDAY,    FALSE, 12, 20) == SATURDAY);
   assert (dayOfWeek (THURSDAY,  FALSE,  9,  9) == MONDAY);
   assert (dayOfWeek (FRIDAY,    FALSE,  5,  5) == MONDAY);
   assert (dayOfWeek (SUNDAY,    FALSE,  7,  7) == WEDNESDAY);
   assert (dayOfWeek (TUESDAY,   FALSE, 11, 11) == SATURDAY);
   assert (dayOfWeek (THURSDAY,  FALSE,  3, 30) == SATURDAY);

   assert (dayOfWeek (TUESDAY,   FALSE,  2,  28) == TUESDAY);
   assert (dayOfWeek (TUESDAY,   FALSE,  2,  27) == MONDAY);
   assert (dayOfWeek (THURSDAY,  FALSE,  1,  3)  == THURSDAY);

//       printf("%d\n", dayOfWeek (SATURDAY, FALSE, 2,1));
   assert (dayOfWeek (SATURDAY, FALSE, 2, 1) == SUNDAY);
   printf ("all tests passed - You are awesome!\n");
   return EXIT_SUCCESS;
}


// given the doomsday for a year, and whether or not it is a
// leap year, this function return the day of the week for any
// given month and day in the year.

int dayOfWeek (int doomsday, int leapYear, int month, int day) {
 int dayOfWeek = 0;
 int dateOfDoomsday = 0;

 if (month == 1 && leapYear == TRUE) {
   dateOfDoomsday=4;
 }else if (month == 1 && leapYear == FALSE) {
   dateOfDoomsday=3;
 }else if (month == 2 && leapYear == TRUE) {
   dateOfDoomsday=29;
 }else if (month == 2 && leapYear == FALSE) {
   dateOfDoomsday=28;
 }else if (month == 3) {
   dateOfDoomsday=7;
 }else if (month == 4) {
   dateOfDoomsday=4;
 }else if (month == 5) {
   dateOfDoomsday=2;
 }else if (month == 6) {
   dateOfDoomsday=6;
 }else if (month == 7) {
   dateOfDoomsday=4;
 }else if (month == 8) {
   dateOfDoomsday=8;
 }else if (month == 9) {
   dateOfDoomsday=5;
 }else if (month == 10) {
   dateOfDoomsday=3;
 }else if (month == 11) {
   dateOfDoomsday=7;
 }else if (month == 12) {
   dateOfDoomsday=5;
 }
 dayOfWeek = doomsday;
 if (day <dateOfDoomsday) {
  dayOfWeek = (((doomsday - (dateOfDoomsday-day))+42)% DAYS_PER_WEEK);
 } else if (day > dateOfDoomsday) {
   dayOfWeek = (((doomsday + (day-dateOfDoomsday))+42)% DAYS_PER_WEEK);
 }
   return (dayOfWeek);
}
