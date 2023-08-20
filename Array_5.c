#include <stdio.h>
#include <conio.h>
int main()
{
	int i=0,j=0;
	int a[3][2]={1,2,3,4,5,6};
	for(i=0;i<3;i++)
	{
		for(j=0;j<2;j++)
		{
			printf("Array [%d][%d] = %d\n",i,j,a[i][j]);
		}
	}
	return 0;
}
