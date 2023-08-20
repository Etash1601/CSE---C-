#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,k,m,n;
	printf("Enter the pattern size: ");
	scanf("%d",&n);
	m=n;
	for(i=0;i<n;i++)
	{
		for(j=1;j<m;j++)
		{
			printf(" ");
		}
		m--;
		for(k=0;k<=i;k++)
		{
			printf("*");
		}
		printf("\n");
	} 
	return 0;
}
