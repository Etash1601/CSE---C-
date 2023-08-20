#include <stdio.h>
#include <conio.h>
int main()
{
	int num[25];
	int i,pos,neg,even,odd;
	pos=neg=even=odd=0;
	for(i=0;i<25;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&num[i]);
	}
	for(i=0;i<25;i++)
	{
		if(num[i]>=0)
		pos++;
		if(num[i]<0)
		neg++;
		if(num[i]%2==0)
		even++;
		if(num[i]%2!=0)
		odd++;
	}
	printf("\nNo of Positive numbers = %d\n",pos);
	printf("No of Negative numbers = %d\n",neg);
	printf("No of Even numbers = %d\n",even);
	printf("No of Odd numbers = %d\n",odd);
	return 0;
}