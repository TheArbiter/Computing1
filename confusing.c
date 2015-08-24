/*
* Test if a point is inside a triangle.
* Julian Saknussemm
* Edited by Ryan Shivashankar
*
* Given Three points of a triangle, and another arbitrary point this program determines if that point lies inside
* the triangle.
*
* This is determined by satisfying the following rule:
* A point P(x,y) is inside triangle A(x0,y0), B(x1,y1), C(x2,y2)
* iff
* P is on the same side of the line AB as C
* P is on the same side of the line BC as A
* and
* P is on the same side of the line AC as B
*
* A special case exits for a vertical line (inf gradient) when testing the side of the line
*/

#include <stdio.h>
#include <stdlib.h>

int test1( double px, double py, double m,double b, double lx,double ly);

int test2( double px, double py, double m, double b );

int tritest(double x0,double y0,double x1,double y1,double x2,double y2,double px, double py);

int main(int argc, char* argv[]) {

 double x0,y0,x1,y1,x2,y2,px;
 double py;

 int scanfReturn = 0;

 // get input
 printf("Triangle Vertex A (x,y): "); scanfReturn += scanf  ("%lf,%lf", &x0,&y0);
 printf("Triangle Vertex  B (x,y): "); scanfReturn += scanf("%lf,%lf", &x1,&y1);
 printf("Triangle Vertex  C (x,y): "); scanfReturn += scanf("%lf,%lf", &x2,&y2);
 printf("Test Point (x,y): "); scanfReturn += scanf("%lf,%lf", &px,&py);

 // print error
 if( scanfReturn != 8 ) {
    printf("Please enter an input other than 8\n");
    return 1;
 }

 // print answer
 printf("Point (%.2lf,%.2lf) is ", px,py);
 if(tritest(x0,y0,x1,y1,x2,y2,px,py)){
    printf("inside");
    printf("the Triangle\n");
 }else{
    printf("outside");
    printf(" the Triangle\n");
 }

 // return 0 (shouldn't this be EXIT_SUCCESS?)
 return 0;

}


// two points lie on the same side of a line
int test1( double px, double py, double m,double b, double lx,double ly){

 return (test2( px,py, m,b )==test2(lx,ly,m,b));

}


int test2( double px, double py, double m, double b ){ 

 if( py < m * px + b ) {

     return -1; // point is under line

 }else if ( py == m * px + b ){

     return 0;

 } else {

     return 1; // point is over line

 }
}




int tritest(double x0,double y0,double x1,double y1,double x2,double y2,double px, double py){

 int lineAB, lineAC, lineBC;
 // line eqns

 double m01 = (y1-y0)/(x1-x0);
 // b: y - y1 = m( x - x1 ), x = 0
 double b01 = m01 * -x1 + y1;
 double m02, m12, b02, b12;
 m02 = (y2-y0)/(x2-x0);
 m12 = (y2-y1)/(x2-x1);
 b02 = m02 * -x2 + y2;
 b12 = m12 * -x2 + y2;

 // vertical line checks

 if( x1 == x0 ) {
    lineAB = ( (px <= x0) == (x2 <= x0) );
 } else {
    lineAB = test1( px, py, m01, b01,x2,y2);
 }

 if( x1 == x2 ) {
    lineAC = ( (px <= x2) == (x0 <= x2) );
 } else {
    lineAC = test1(px,py, m12, b12,x0,y0);
 }

 if( x2 == x0 ) {
    lineBC = ( (px <= x0 ) == (x1 <= x0) );
 } else {
    lineBC = test1(px, py, m02,b02,x1,y1);
 }

 return lineAB && lineAC && lineBC;

}
