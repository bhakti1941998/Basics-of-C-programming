#include <stdio.h>
 //Reserved Memory
 
 int main(){
     int num = 10;
     char ch = 'A';
     float f = 4.3;
     double d1 = 10.23;

     printf("\nsize of char = %d",sizeof(ch));      //1 bytes = 8 bits
     printf("\nsize of int = %d",sizeof(num));      //4 bytes = 32 bits
     printf("\nsize of float = %d",sizeof(f));      //4
     printf("\nsize of double = %d",sizeof(d1));    //8 bytes = 64 bits 
     return 0;
 }