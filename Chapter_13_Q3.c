#include <stdio.h>
#include <conio.h>
void smallest(int *,int);
int main()
{
	int num[25];
	int i;
	for(i=0;i<25;i++)
	{
		printf("Enter number %d = ",i+1);
		scanf("%d",&num[i]);
	}
	int *small = &num[0];
	for(i=1;i<25;i++)
	{
		if(*(num+i)<*small) //num[i] = *(num + i)
		*small = *(num+i);
	}
	printf("smallest number = %d",*small);
	return 0;
}