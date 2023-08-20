#include <stdio.h>
#include <conio.h>
#include <math.h>

void calculation(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y, float*A, int*point);
float calc_distance(float x1, float y1, float x2, float y2);
float calc_area(float a, float b, float c);
float position(float A, float A1, float A2, float A3);

int main()
{
	float x, y, x1, y1, x2, y2, x3, y3;
	float A, A1, A2, A3;
	float area;
	int point;
	printf("Enter coordinates (x1,y1) : ");
	scanf("%f %f",&x1, &y1);
	printf("Enter coordinates (x1,y1) : ");
	scanf("%f %f",&x2, &y2);
	printf("Enter coordinates (x1,y1) : ");
	scanf("%f %f",&x3, &y3);
	printf("Enter a point(x,y) to check if it lies inside the triangle ABC : ");
	scanf("%f %f",&x, &y);
	
	calculation(x1, x2, x3, y1, y2, y3, x, y, &area, &point);
	printf("\nArea of triangle ABC : %f\n",&area);
	if(point==1)
	printf("Point (%f,%f) lies inside the triangle ABC\n",&x,&y);
	else
	printf("Point (%f,%f) lies outside the triangle ABC\n",&x,&y);
	return 0;
}


void calculation(float x1, float x2, float x3, float y1, float y2, float y3, float x, float y, float*A, int*point)
{
	float a, b, c, d, e, f,Area, A1, A2, A3;
	a = calc_distance(x1,y1,x2,y2);
	b = calc_distance(x1,y1,x3,y3);
	c = calc_distance(x2,y2,x3,y3);
	*A = calc_area(a,b,c);
	//Area = calc_area(a,b,c);
	d = calc_distance(x1,y1,x,y);
	e = calc_distance(x2,y2,x,y);
	f = calc_distance(x3,y3,x,y);
	A1 = calc_area(a,d,e);
	A2 = calc_area(b,d,f);
	A3 = calc_area(e,c,f);
	
	*point = position(*A, A1, A2, A3);
}
float calc_distance(float x1, float y1, float x2, float y2)
{
    float dis = sqrt(pow((x2 - x1),2)+ pow((y2 -y1),2));
	return (dis);
}
float calc_area(float a, float b, float c)
{
	float s = a+b+c/2.0;
    float ar = sqrt(s*(s-a)*(s-b)*(s-c));
	return (ar);
}
float position(float A, float A1, float A2, float A3)
{
	if(A1+A2+A3 <= A)
	return (1);
	else
	return (0);
}