#include <stdio.h>
int main()
{
	int l,b,peri,area;
	printf("Enter length and breadth of rectangle: ");
	scanf("%d %d",&l,&b);
	peri = 2*(l+b);
	area = l*b;
    if(area>peri)
    printf("Area is greater than the Perimeter of Rectangle");
    else
	printf("Area is less than the Perimeter of Rectangle");
	return 0;
}
