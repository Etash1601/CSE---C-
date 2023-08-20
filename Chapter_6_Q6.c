#include <stdio.h>
#include <conio.h>
int main()
{
	int i,pop=100000;
	for(i=1;i<=10;i++)
	{
		pop = pop - pop*0.1;
		printf("%d years back, population was %d\n",i,pop);
	}
	return 0;
}
