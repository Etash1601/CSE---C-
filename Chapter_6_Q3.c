#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int i;
	float p,n,r,q,a;
	for(i=1;i<=10;i++)
	{
		printf("Set %d\n",i);
		printf("Enter Principal value: ");
		scanf("%f",&p);
		printf("Enter Number of years: ");
		scanf("%f",&n);
		printf("Enter Rate of interest: ");
		scanf("%f",&r);
		printf("Enter no of times you Compound per year: ");
		scanf("%f",&q);
		a = p*pow((1+r/q),n*q);
		printf("Compounded amount = %f\n\n",a);
	}
	return 0;
}
