#include <stdio.h>
#include <conio.h>
int g; // global
int main()
{
	int a=10,b=20; // local
	g=a+b;
	printf("%d %d %d\n",a,b,g);
	myfunction();
	return 0;
}
myfunction()
{
	int g=15; // local -----> preference
	printf("My Function print global variable = %d",g);
}
