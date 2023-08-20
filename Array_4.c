#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,sum=0,avg,a[10];
	for(i=0;i<5;i++)
	{
		printf("Enter number%d: ",i+1);
		scanf("%d",&a[i]);
	}
	n=i;
	for(i=0;i<5;i++)
	{
		sum = sum + a[i];
	}
	avg = sum/5;
	printf("Average = %d",avg);
	return 0;
}
