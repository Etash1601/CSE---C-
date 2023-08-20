#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,c=0; // here c is used for knowing how many times n was divisible by i
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++; // each time when n is divisible by i then value of c increases by 1
		}
	}
	if(c==2) // a prime no. can only be divisible "twice" by 1 and Itself
	{
		printf("Given number - %d is a prime number",n);
	}
	else
	{
		printf("Not a prime number");
	}
	return 0;
}