#include <stdio.h>
#include <conio.h>
int main()
{
	int x,y,z;
	printf("Enter variable 1: ");
	scanf("%d",&x);
	printf("Enter variable 2: ");
	scanf("%d",&y);
	printf("Enter variable 3: ");
	scanf("%d",&z);
	printf("Before shift,\n x=%d, y=%d, z=%d\n",x,y,z);
	shift(&x,&y,&z);
	printf("\nAfter shift,\n x=%d, y=%d, z=%d\n",x,y,z);
	return 0;
}
void shift(int*a,int*b,int*c)
{
	int temp;
	temp=*c;
    *c=*b;
	*b=*a;
	*a=temp;
}
