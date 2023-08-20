#include <stdio.h>
int main ()
{
    float temp1, temp2;
    printf("Enter temperature in fahrenheit : \n");
    scanf("%f", &temp1);
    temp2 = (temp1 - 32) * 5/9;
    printf("Temperature in Centigrade = %f Degree Celcius \n", temp2);
    return 0;
}