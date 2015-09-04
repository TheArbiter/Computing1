// Created by Ryan Shivashankar

#include <stdio.h>
#include <stdlib.h>

void testDanish (void);
void showDanish (void);

void testDanish () {
  printf ("Output should look like\n");
  printf ("** *********\n");
  printf ("** *********\n");
  printf ("\n");
  printf ("** *********\n");
  printf ("** *********\n");
}
 
void showDanish () {
  int row=1 , col=1;
 
  while (row<=5){
    if (row!=3) {
      while(col<=12){
        if (col!=3) {
          printf ("*");
        } else {
          printf (" ");
        }
        col++;
      }
    }
    col=1;
    printf ("\n");
    row++;
  }
  }
 
int main (int argc, char *argv[]) {
 
  testDanish ();
  showDanish ();
 
  return EXIT_SUCCESS;
 
}
