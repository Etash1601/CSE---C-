#include<stdio.h>
#include <math.h>
int main()
{
	int i,a,l=0,n1,n2,n3,rem1,rem2,rem3;
	float sum,avg,square,cube;
	printf("Enter the number: ");
	scanf("%d",&a);
	n1=n2=n3=a;
	while(a>0)
	{
		a = a/10;
		l++;
	}
	if(l%2==0)
	{
		for(i=1;i<=l/2;i++)
		{
			rem1 = n1%10;
			n1 = n1/10;
		}
		for(i=0;i<=l/2;i++)
		{
			rem2 = n2%10;
			n2 = n2/10;
		}
		sum = rem1 + rem2;
		avg = sum/2;
		square = pow(avg,2);
		cube = pow(avg,3);
		printf("Square of the middle digit = %0.2f\n",square);
		printf("Cube of the middle digit = %0.2f\n",cube);
	}
	else
	{
		for(i=0;i<=l/2;i++)
		{
			rem3 = n3%10;
			n3 = n3/10;
		}
		square = pow(rem3,2);
		cube = pow(rem3,3);
		printf("Square of the middle digit = %0.2f\n",square);
		printf("Cube of the middle digit = %0.2f\n",cube);	
	}
	return 0;
}
