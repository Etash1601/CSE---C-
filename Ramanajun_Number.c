#include <stdio.h>
#include <conio.h>
int main()
{
	int i,x,y,count;
	int num;
	printf("Enter the range: ");
	scanf("%d",&num);
	for(i=1;i<=num;i++)
	{
		count=0;
		printf("Count = %d\n",count);
		printf("We are printing i = %d\n",i);
		for(x=1; x*x*x<i ;x++)
		{
			printf("We are printing x cube = %d\n",x*x*x);
			for(y=x; x*x*x + y*y*y <=i ;y++)
			{
				printf("We are printing x cube + y cube = %d\n",x*x*x+y*y*y);
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
