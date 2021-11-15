#include <stdio.h>

// Width Specifier

 int main(){
     
     // ---------------------------------------------------------------------------

     int num = 10;
     printf("%d",num);      //10

     printf("\n%6d",num);     //_ _ _ _ 1 0        Right Justified
     printf("\n%8d",num);     //_ _ _ _ _ _ 1 0

     printf("\n%-6d",num);    //1 0 _ _ _ _        Left Justified

     printf("\n%06d",num);    // 0 0 0 0 1 0

     // ---------------------------------------------------------------------------

     float fvar = 12.50;
     printf("\n%f",fvar);     //12.500000
     
     printf("\n%6.2f",fvar);  // _ 1 2 . 5 0
     printf("\n%8.2f",fvar);  // _ _ _ 1 2 . 5 0

     printf("\n%6.3f",fvar);  // 1 2 .5 0 0

     printf("\n%-6.2f",fvar); //1 2 . 5 0 _

     // ---------------------------------------------------------------------------

     printf("\n%.f",fvar); // 12.50 = 13 

     // %.f is used for roundinf off the number
     float x = 15.29;
     printf("\n%.f",x); // 15.29 = 15


     return 0;
 }