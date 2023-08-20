#include <stdio.h>
int main()
{
	int i,j,n,temp,even=0,odd=0;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("Enter array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
			a[i]=a[j];
			a[j]=temp;
			}
		}
	}

	for(i=n-1;i>=0;i--)
	{
		if(a[i]%2==0)
		{
			even++;
			if(even==2)
			{
				printf("%d is the second largest even number\n",a[i]);
			}
		}
		else
		{
			odd++;
			if(odd==2)
			{
				printf("%d is the second largest odd number\n",a[i]);
			}
		}
	}
	return 0;
}
