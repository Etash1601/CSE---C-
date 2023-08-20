#include <stdio.h>
int main()
{
	float x1,x2,x3,y1,y2,y3,m,n;
	printf("Enter Point (x1,y1) : ");
	scanf("%f %f",&x1,&y1);
	printf("Enter Point (x2,y2) : ");
	scanf("%f %f",&x2,&y2);
	printf("Enter Point (x1,y1) : ");
	scanf("%f %f",&x3,&y3);
	m = (y2-y1)/(x2-x1);
	n = (y3-y2)/(x3-x2);
	if(m==n)
	printf("Given three points fall on one straight line");
	else
	printf("Given three points does not fall on one straight line");
	return 0;
}