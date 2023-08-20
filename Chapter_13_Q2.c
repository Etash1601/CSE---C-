#include <stdio.h>
#include <conio.h>
int main()
{
	int n,i,a,b;
	printf("Enter number of elements : ");
	scanf("%d",&n);
	int arr[n];
	for(i=0;i<n;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		b=i+1;
		a=n-b;
		if(arr[i]==arr[a])
		printf("arr[%d] = arr[%d - %d]\n",i,n,b);
	}
	return 0;
}