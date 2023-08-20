#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
    int num,a,b,c,sum;
    num = 1;
    while(num<=500)
    {
        c = num%10;
        b = (num/10)%10;
        a = num/100;
        sum = pow(a,3) + pow(b,3) + pow(c,3);
        if(num==sum)
        {
            printf("%d is an Armstrong Number \n",num);
        }
        num++;
    }
    return 0;
}