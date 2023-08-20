#include <stdio.h>
#include <conio.h>
void leap(int y)
{
	if(y%4==0)
	printf("%d is a leap year",y);
	else
	printf("%d is not a leap year",y);
}
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	leap(year);
	return 0;
}
