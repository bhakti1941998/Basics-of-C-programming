
int main()
{
    float radius,area,circumference;// variable decln  

    // 1. INPUT
    // I/P the radius --> scanf(); 
       printf("Enter the radius ");
       scanf("%f",&radius); // 1.2  

    // 2.Processing the logic 
       area = 3.1412 * radius * radius; 
       
       circumference = 2 * 3.1412 * radius;

    // 3.Output 
        printf("Area = %f\n",area);
        printf("Circuference = %f\n",circumference);             




    return 0; 
}