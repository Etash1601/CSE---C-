// If the three sides of a triangle are entered through the keyboard, 
// Write a program to check whether the triangle is isosceles, equilateral, 
// scalene or right angled triangle

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int x,y,z;
	printf("Enter side 1 of traingle : ");
	scanf("%d",&x);
	printf("Enter side 2 of traingle : ");
	scanf("%d",&y);
	printf("Enter side 3 of traingle : ");
	scanf("%d",&z);
	if(x==y && y==z)   // all sides are equal
	printf("Triangle is Equilateral \n"); 
	if((x==y && x!=z) || (y==z && y!=x) || (z==x && z!=y))  // any two sides are equal and one unequal side
	printf("Triangle is Isosceles \n"); 
	if(x!=y && y!=z && z!=x)   // no sides are equal
	printf("Triangle is Scalene \n");
	if((x*x + y*y == z*z)||(y*y + z*z == x*x)||(z*z + x*x == y*y))   // pythgorus theorem
	printf("Triangle is Right-Angled \n");
	return 0;
}