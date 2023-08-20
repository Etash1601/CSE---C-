#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int num,rem,deci=0,i=0;
	printf("Enter a binary number: ");
	scanf("%d",&num);
	while(num!=0)
	{
		rem = num % 10;
		deci = deci + rem*pow(2,i);
		num = num / 10;
		i++;
	}
	printf("Decimal Number = %d",deci);
	return 0;
}