#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,a[10]; // here 10 is just a size
	printf("Enter the decimal value: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++) // to run until n becomes 0 by continues division
	{
		a[i]=n%2;
		n=n/2;
	}
	n=i; // how many times i(loop) ran is stored in n
	printf("Binary Value = ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[n-i-1]); // to print in reverse order
	}
	return 0;
}
