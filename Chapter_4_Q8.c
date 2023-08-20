#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    float angle,sum;
    printf("Enter angle in degrees: ");
    scanf("%f",&angle);
    sum = pow(sin(angle),2) + pow(cos(angle),2) ;
    if(sum==1)
    printf("Sum of squares of sine and cosine = 1");
    else
    printf("Sum of squares of sine and cosine is not equals to 1");
    return 0;
}