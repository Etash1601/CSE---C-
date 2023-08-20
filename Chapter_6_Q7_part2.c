#include <stdio.h>
#include <conio.h>
int main()
{
	int i,x,y,count;
	int num;
	printf("Enter the range: ");
	scanf("%d",&num);
	for(i=2;i<=num;i++)
	{
		count=0;
		for(x=1; x*x*x<i ;x++)
		{
			for(y=x; x*x*x + y*y*y <=i ;y++)
			{
				if(x*x*x + y*y*y == i)
				{
					count++;
				}
			}
		}
		if(count==2)
		{
			printf("%d\n",i);
		}
	}
	return 0;
}
