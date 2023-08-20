#include <stdio.h>
#include <conio.h>
/*void test();
int main()
{
	test();
	test();
	test();
	return 0;
}
void test()
{
	static int a=0;
	a=a+1;
	printf("Value of a = %d\n",a);
}*/

/*int main()
{
	auto a,b;
	auto i,j;
	printf("A=%d, B=%d\n",a,b);
	printf("I=%d, J=%d\n",i,j);
	return 0;
}*/

/*int main()
{
	register int a;
	printf("%d",a);
}*/

int main()
{
	extern int a; // since extern cant find any external initialization of int a, so it gives error
	printf("%d",a);
}
