#include <stdio.h>
#include <conio.h>
void modify(int *);
int main()
{
	int arr[10];
	int i;
	for(i=0;i<10;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	modify(&arr[0]);
	for(i=0;i<10;i++)
	{
		printf("New array element = %d\n",arr[i]);
	}
	return 0;
}
void modify(int a[])
{
	int j;
	for(j=0;j<10;j++)
	{
		a[j] = a[j]*3;
	}
}