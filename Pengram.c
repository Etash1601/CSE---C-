#include <stdio.h>
#include <string.h>
int main()
{
	char a[100];
	int i,j,n,c=0,d=0;
	printf("Enter the Line: ");
	gets(a);
	n = strlen(a);
	strlwr(a);
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j] && a[i]!=' ')
			{
				d++;
			}
			else
			{
				c++;
			}
		}
	}
	if(d>0)
	{
		printf("Not a Pengram\n");
	}
	else
	{
		printf("Pengram\n");
	}
	return 0;
}
