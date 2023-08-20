#include <stdio.h>
#include <conio.h>
int main()
{
	int i,range,limit,num,big,small;
	printf("Enter the limit:");
	scanf("%d",&limit);
    small=0;
    big=0;
	for(i=1;i<=limit;i++)
	{
		printf("Enter a number: ");
		scanf("%d",&num);
		if(num>big)
		big=num;
		if(num<small)
		small=num;	
	}
	printf("Biggest Number = %d\n",big);
	printf("Smallest Number = %d\n",small);
	printf("Range = %d",big-small);
	return 0;
}