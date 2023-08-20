#include <stdio.h>
int main()
{
	int n1,n2,l=0,i,odd,even,sum1,sum2,sum3;
	odd=even=sum1=sum2=sum3=0;
	printf("Enter a number greater than 10000: ");
	scanf ("%d",&n1);
	while(n1<=10000)
	{
		printf("Please enter a valid input: ");
		scanf("%d",&n1);
	}
	n2 = n1;
	while(n1!=0)
	{
		n1 = n1/10;
		l++;
	}
	printf("\nNumber of digits = %d\n",l);
	int a[l];
	for(i=0;i<l;i++)
	{
		a[i] = n2%10;
		n2 = n2/10;
	}
	for(i=0;i<l;i++)
	{
		sum1 = sum1 + a[i];
		if(a[i]%2==0)
		{
			even++;
			sum2 = sum2 + a[i];
		}
		else
		{
			odd++;
			sum3 = sum3 + a[i];
		}
	}
	printf("Number of even numbers = %d\n",even);
	printf("Number of odd numbers = %d\n",odd);
	printf("\nSum of all the digits = %d\n",sum1);
	printf("Sum of even digits = %d\n",sum2);
	printf("Sum of odd digits = %d\n",sum3);
	return 0;
}
