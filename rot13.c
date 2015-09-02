// Edited by Ryan Shivashankar

#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
 
char encode (char letter);
void testEncode (void);
 
int main (int argc, char* argv[]) {
 
   testEncode();
 
   char letter;
   char cipherText;
 
   scanf("%c", &letter);
   cipherText = encode(letter);
   printf("%c\n", cipherText);
 
   return EXIT_SUCCESS;
}
 
char encode (char letter) {
   if ((letter >= 'n' && letter<= 'z') || (letter >= 'N' && letter<= 'Z')) {
    return letter- 13;
   }else if
   ((letter>= 'a' && letter<= 'n') || (letter>= 'A' && letter<= 'N')) {
    return letter+ 13;
   } else {
     return letter;
   }
 
}
 
void testEncode (void) {
   assert(encode('a') == 'n');
   assert(encode('n') == 'a');
   assert(encode('A') == 'N');
   assert(encode('z') == 'm');
   assert(encode('M') == 'Z');
   assert(encode('7') == '7');
   assert(encode('$') == '$');
}
