#include <stdio.h>
#include <conio.h>
int main()
{
	int num = 25;
	printf("Sum of first 25 natural numbers = %d\n",sum(num));
	return 0;
}
int sum(int num)
{
	if(num>0)
	return (num + sum(num-1));
	else
	return 0;
}
