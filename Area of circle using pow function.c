#include<stdio.h>
#include<math.h>
main()
{
    int r;
    float pi=3.14,A;
    
    printf("Enter the radius :-");
    scanf("%d",&r);
    
    A=pi*pow(r,r);
    
    printf("\nArea of circle = %f",A);

}