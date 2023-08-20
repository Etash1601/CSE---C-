#include <stdio.h>
#include <conio.h>
int main()
{
	int a[5],i,j,temp;
    for(i=0;i<5;i++)
    {
	    printf("Enter number %d = ",i+1);
	    scanf("%d",&a[i]);
    }
    for(i=1;i<5;i++)
    {
	    temp = a[i];
	    j = i-1;
	    while(j>=0 && a[j]>temp)
	    {
		    a[j+1] = a[j];
		    j--;
	    }
	    a[j+1] = temp;
    }
    for(i=0;i<5;i++)
    {
	    printf("Sorted numbers = %d\n",a[i]);
    }
    return 0;
}