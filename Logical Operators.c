#include <stdio.h>
#include <conio.h>
int main()
{
	int a=5, b=20;
	if(a&&b) //(True && True)
	{
		printf("1st Condition is true \n");
	}
	if(a||b) //(True || True) 
	{
		printf("2nd Condition is true \n");
	}
	if(!a&&b)
	{
		printf("6th Condition is true \n");
	}
	else
	{
		printf("7th Condition is true \n");
	}
	// Value of a and b will be changed below
	a=0;
	b=10;
	if(a&&b) //(False && True) = False
	{
		printf("3rd Condition is ture \n");
	}
	else
	{
		printf("4th Condition is true \n");
	}
	if(!a&&b) // (! x False) = True
	{
		printf("5th Condition is true \n");
	}
	if(a||b) // if one side of condition is true then it prints true unlike && where
	{        // all the conditions needs to be true 
		printf("8th Condition is true \n");
	}
	return 0;
}
