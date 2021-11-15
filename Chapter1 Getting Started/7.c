#include <stdio.h>

 // conversion of char into a decimal 

 int main(){
     

     char ch1  = 'A';
     printf("%d", ch1);

     char ch2 = 500;
     printf("\n%d", ch2); 
     /*
     char = 1 byte = 8 bits 
     signed char range => -128 to 127
     2 to the power 8 = 256
     500 is not in the range so..

     1) 500 - 256 = 244 (not in the range)
     2) 244 -256 = -12 //-12 is present in the range
     */

     char ch3 = 900;
     printf("\n%d", ch3);//-124
     /*
     900 -256 = 644
     644 - 256 = 388
     388 - 256 = 132
     132 - 256 = -124
     */

     unsigned char ch4 = 500;
     printf("\n%d", ch4);//244

     /*
     unsigned char range = 0 to 255
     
     500 is not in the range so..

     1) 500 - 256 = 244
     */

     unsigned char ch5 = 900;
     printf("\n%d",ch5);//132
     /*
     900 is not in the range of unsigned char so 

     1) 900-256= 644
     2)644 - 256 = 388
     3) 388 - 256 = 132
     */

     return 0;
 }