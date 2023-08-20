#include<stdio.h>
int minimum(int[],int,int); // Function Declaration (array, length, 0th no)
int maximum(int[],int,int);
int main()
{
	int i,n,min,max;
	printf("Enter the length of the array: ");
	scanf("%d",&n);
	int a[n];
	printf("\nEnter the elements of the array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	min =max=a[0];
	min = minimum(a,n-1,min);
	max = maximum(a,n-1,max); // Function Call
	printf("\nThe Smallest Numner in array = %d\n",min);
	printf("The Largest Numner in array = %d",max);
	return 0;
}

int minimum(int a[],int n,int min) // Function Definition
{
	if(n>=0) // Base Condition
	{
		if(a[n]<min) // Main Condition
		{
			min = a[n];
		}
		return (min = minimum(a,n-1,min)); // Recursing Function Call
	}
	else
	{
		return min;
	}
}

int maximum(int a[],int n,int max)
{
	if(n>=0)
	{
		if(a[n]>max)
		{
			max = a[n];
		}
		return (max = maximum(a,n-1,max));
	}
	else
	{
		return max;
	}
}
