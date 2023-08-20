#include <stdio.h>
int main()
{
	int num;
	printf("Enter a positive or negative number: ");
	scanf("%d",&num);
	if(num<0)
	printf("Absolute Value of (%d) = %d",num,num*(-1));
	else
	printf("Absolute Value of (%d) = %d",num,num);
	return 0;
}