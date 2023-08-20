#include <stdio.h>
#include <conio.h>
void primefactors(int num)
{
	int i; // here [i=2] is the smallest prime number
	for(i=2;num>1;i++) // [num>1] means that last division should stop after the quotient is 1
	{
		while(num%i==0) // for factorisation 
		{
			printf("%d ",i); // printing prime no. which divides the number completely
			num = num/i; // for breaking down the entered number
		}
	}
}
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("\nPrime Factors of %d are ",num);
	primefactors(num);
	return 0;
}
