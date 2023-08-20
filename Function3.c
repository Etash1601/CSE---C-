#include <stdio.h>
#include <conio.h>
/*void swap(int *x,int *y); //here swap is a predefined function
int main()
{
	int a = 100;
	int b = 200;
	printf("Before swap %d",a);
	printf("Before swap %d",b);
	swap(&a,&b);
	printf("After swap %d",a);
	printf("After swap %d",b);
}*/
void swap(int*, int*); 
int main()
{
   int a = 10;
   int b = 20;
   printf("\nBefore Swapping\na = %d\nb = %d\n", a, b);
   swap(&a,&b); 
   printf("After Swapping\na = %d\nb = %d\n", a, b);
   return 0;
}
void swap(int *x, int *y)
{
   int temp;
   temp = *y;
   *y = *x;
   *x = temp;   
}
