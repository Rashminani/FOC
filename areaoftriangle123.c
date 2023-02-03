#include <stdio.h>
void main()
{
    float b,h;
    printf("Enter B and H: ");
    scanf("%f %f",&b,&h);
    float area = (b * h) / 2;
 
    //Area with precision of 2 decimal places
    printf("Area of Triangle is %0.2f",area);
}

