#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float x1,x2,y1,y2,rad,dis;
	printf("Enter Centre of the circle (x1,y1): ");
	scanf("%f %f",&x1,&y1);
	printf("Enter Radius of the circle: ");
	scanf("%f",&rad);
	printf("Enter a Point on the circle (x2,y2) to check its position: ");
	scanf("%f %f",&x2,&y2);
	dis = sqrt(pow((y2-y1),2) + pow((x2-x1),2));
	if(dis>rad)
	printf("Given point (%f,%f) lies outside the circle",x2,y2);
	else if(dis<rad)
	printf("Given point (%f,%f) lies inside the circle",x2,y2);
	else if(dis==rad)
	printf("Given point lies (%f,%f) on the circumference of the circle",x2,y2);
	return 0;
}