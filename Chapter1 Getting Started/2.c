#include <stdio.h>
#include <limits.h>
// Datatypes
int main(){
    //-------------------------------------------------
    //Signed Char Range
    printf(" Char min = %d\n",CHAR_MIN);
    printf(" Char max = %d\n",CHAR_MAX);

    //Unsigned Char Range
    printf(" UnSigned Char min = 0\n");
    printf(" UnSigned Char max = %d\n",UCHAR_MAX);

    //-------------------------------------------------
    
    // Signed Short Integer Range 
    printf(" Short Int min = %d\n",SHRT_MIN);
    printf(" Short Int max = %d\n",SHRT_MAX);
    
    //Unsigned Integer Range
    printf(" UnSigned Short Int min = 0\n");
    printf(" UnSigned Short Int max = %d\n",USHRT_MAX);

    //-------------------------------------------------

    // Signed Integer Range 
    printf(" Int min = %d\n",INT_MIN);
    printf(" Int max = %d\n",INT_MAX);
    
    //Unsigned Integer Range
    printf(" UnSigned Int min = 0\n");
    printf(" UnSigned Int max = %u\n",UINT_MAX);

    //-------------------------------------------------

    // Signed Long Range 
    printf(" Long min = %d\n",LONG_MIN);
    printf(" Long max = %d\n",LONG_MAX);
    
    //Unsigned  Long Range
    printf(" UnSigned  Long min = 0\n");
    printf(" UnSigned  Long max = %u\n",ULONG_MAX);

    //-------------------------------------------------
     return 0;

}
/*
 Char min = -128
 Char max = 127
 UnSigned Char min = 0
 UnSigned Char max = 255

 Short Int min = -32768
 Short Int max = 32767
 UnSigned Short Int min = 0
 UnSigned Short Int max = 65535

 Int min = -2147483648
 Int max = 2147483647
 UnSigned Int min = 0
 UnSigned Int max = 4294967295

    Size of simple int data type varies from compiler to compiler
    for 16 bit compuler it is 2 bytes , it works like short eg . TurboC
    for 32 bit compuler it is 4 bytes , it works like LONG eg . gcc
 
 Long min = -2147483648
 Long max = 2147483647
 UnSigned  Long min = 0
 UnSigned  Long max = 4294967295 
 
*/