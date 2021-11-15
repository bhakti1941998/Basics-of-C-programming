#include<stdio.h> 

int main() 
{
    int a = 1; 
    int b = 2; 
    int c = 3; 

    printf("a = %d b = %d c = %d",a,b,c);//a = 1 b = 2 c = 3

    a+=b+=c+=1; 
    // c+=1 => c = 3+1 = 4
    // b+=4 => b = 2+4 = 6
    // a+=6 => a = 1+6 = 7

    printf("\na = %d b = %d c = %d",a,b,c);  //a = 7 b = 6 c = 4
    
    int x,y,z; 
    x=y=z=-3;  
    // = --> assignment operator  

    printf("\nx = %d y = %d z = %d",x,y,z);  


    return 0; 
}
