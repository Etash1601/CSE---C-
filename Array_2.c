#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,a[10];
	printf("Enter a number: ");
	scanf("%d",&n);
	for(i=0;n!=0;i++)
	{
		a[i]=n%10;
		n=n/10;
	}
	n=i;
	printf("Reverse Number = ");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	return 0;
}
