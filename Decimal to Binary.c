#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num,rem,bin=0,i=0;
	printf("Enter a number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem = num % 2;
		bin = bin + rem*pow(10,i);
		num = num / 2;
		i++;
	}
	printf("Binary Number = %d",bin);
	return 0;
}
