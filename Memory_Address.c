#include <stdio.h>
#include <conio.h>
int main()
{
	int num;
	printf("Enter a number: ");
	scanf("%d",&num);
	printf("\n You have entered a number %d\n",num);
	printf("The number you have entered %d is located at %p\n",num,&num);
	return 0;
}
