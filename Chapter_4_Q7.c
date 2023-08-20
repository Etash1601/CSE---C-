#include <stdio.h>
int main()
{
	int a,b,c,big;
	printf("Enter three numbers: ");
	scanf("%d %d %d",&a,&b,&c);
	big = (a>b&&a>c ? a:b>c ? b:c);
	printf("Biggest Number = %d",big);
	return 0;
}