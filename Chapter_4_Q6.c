#include <stdio.h>
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	(year%4==0) ? printf("Leap Year"):printf("Not a leap year");
	return 0;
}