#include<stdio.h>
#include<conio.h>
int main()
{
    int i, j,k,l=1;
    for(i=1;i<=4;i++)
    {
    	for(j=4;j>i;j--) // to create space for first 3 rows in decreasing order
    	{
    		printf(" ");
		}
        for(k=1;k<=i;k++)
        {
            printf("%d ",l);
            l++;
        }
    printf("\n");
    }
    return 0;
}
