#include <stdio.h>
#include <conio.h>
int main()
{
	int h;
	for(h=0;h<=23;h++)
	{
		if(h==0)
		{
			printf("12 Midnight\n");
			continue; // To break at 0 so that 0 at next step does not goes to (h<12)
		}             // to get printed as 0 AM.
		if(h<12)
		{
			printf("%d AM\n",h);
		}
		if(h==12)
		{
			printf("12 Noon\n");
		}
		if(h>12)
		{
			printf("%d PM\n",h%12);
		}
	}
	return 0;
}
