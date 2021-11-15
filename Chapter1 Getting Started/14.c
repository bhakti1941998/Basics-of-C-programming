#include<stdio.h> 

int main()
{
    int Dividend ;
    printf("Enter Dividend");
    scanf("%d",&Dividend);

    int Divisor ;
    printf("Enter Divisor ");
    scanf("%d",&Divisor );

    int Remainder ;
    float Quotient;

    Remainder = Dividend % Divisor; // Remainder 
    Quotient = Dividend / Divisor; // Quotient 

    printf("Remainder = %d",Remainder); 
    printf("Quotient = %.2f",Quotient); 

    return 0; 
}