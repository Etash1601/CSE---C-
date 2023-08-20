#include <stdio.h>
#include <conio.h>
int main()
{
	int ori,num,a,rev;
    rev = 0;
	printf("Enter a five digit number: ");
	scanf("%d",&num);
    ori=num;
    while(num!=0)
    {
    a = num % 10; //1
    rev = (rev * 10) + a;
    num = num/10;
    }
	if(rev==ori)
	{
	printf("Original and Reversed numbers are equal");
    }
    else
    {
	printf("\nReverse Number = %d \n",rev);
	printf("Original and Reversed numbers are not equal");
	}
	return 0;
}