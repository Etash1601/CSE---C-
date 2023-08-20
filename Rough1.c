#include <stdio.h>
#include <stdlib.h>
void calc(int *ptr,int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum = sum + *(ptr+i);
	}
	printf("Sum = %d",sum);
}
int main()
{
	int i,n, *ptr;
	printf("Enter size of array: ");
	scanf ("%d",&n);
	ptr = (int*)calloc(n,sizeof(int));
	if(ptr==NULL)
	{
		printf("Sorry");
		exit(0);
	}
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	calc(ptr,n);
	
	printf("\nEnter new size of array: ");
	scanf ("%d",&n);
	
	realloc(ptr,n*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Sorry");
		exit(0);
	}
	printf("Enter elements of array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",(ptr+i));
	}
	calc(ptr,n);
	return 0;
}
