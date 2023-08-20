#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n,s=0;
	printf("Enter a number: ");
	scanf("%d",&n);
    printf("\n");
    printf("0 ");
	for(i=1;i<=n;i=i+2)
	{
		s = s+i;
		printf("+ %d ",i);
	}
	printf("\nSum of the numbers = %d",s);
	return 0;
}