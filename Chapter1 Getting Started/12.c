#include<stdio.h> 

int main()
{
    char ch; 
    printf("Enter the character");
    //printf("%d",'\n'); 
    scanf("%*c%c",&ch); // %*c = pressing Enter --> new line--> \n 
    printf("%d",ch); // 10
}