#include <stdio.h>
#include <conio.h>
void romanise(year)
{
	if(year>=1000)
	{
		printf("m");
		romanise(year-1000); // recursion [calling the function again]
	}
	else if(year>=500)
	{
		printf("d");
		romanise(year-500);
	}
	else if(year>=100)
	{
		printf("c");
		romanise(year-100);
	}
	else if(year>=50)
	{
		printf("l");
		romanise(year-50);
	}
	else if(year>=10)
	{
		printf("x");
		romanise(year-10);
	}
	else if(year>=5)
	{
		printf("v");
		romanise(year-5);
	}
	else if(year>=1)
	{
		printf("i");
		romanise(year-1);
	}
}
int main()
{
	int year;
	printf("Enter a year: ");
	scanf("%d",&year);
	romanise(year);
	return 0;
}
