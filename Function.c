#include <stdio.h>
#include <conio.h>
void swap(int *x,int *y);//here swap is a predefined function
int main()
{ 
	int a = 100;
	int b = 200;
	printf("Before swap %d",a);
	printf("Before swap %d",b);
	swap(&a , &b);
	printf("After swap %d",a);
	printf("Before swap %d",b);
	//return 0;
}