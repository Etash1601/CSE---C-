#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int i;
	float x,a,b,c,sum=0;
	printf("Enter x: ");
	scanf("%f",&x);
	a = (x-1)/x;
	for(i=2;i<=7;i++)
	{
		b = pow(a,i);
		c = b/2;
		sum = sum + c;
	}
	sum = a + sum; 
	printf("Sum = %f",sum);
	return 0;
}
