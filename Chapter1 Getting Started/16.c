#include<stdio.h> 

int main()
{
    //short hand operators 
    // num = num + 2
    int num =4 ;
    num+=2;  // num = num + 2  //6 
    num-=2;  // num = num - 2  // 6-2 = 4
    num+=5; // num = num + 5 --> 4 + 5 --> 9  
    num%=2; // num = num % 2 --> 9 % 2 --> 1 
  
    printf("%d",num);    

    /*
            num = num + 5 // same 
            num+=5 // same  
    */

    return 0; 
}
