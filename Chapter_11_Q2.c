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
	int a=0;
	a=a+1;
	printf("Value of a = %d\n",a);
}*/

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
	int a=5;
	a=a+1;
	printf("Value of a = %d\n",a);
}*/

/*int main()
{
	int a,b;
	int i,j;
	printf("A=%d, B=%d\n",a,b);
	printf("I=%d, J=%d\n",i,j);
	return 0;
}*/

/*int main()
{
	register int a=0;
	printf("%u",&a); // register doesnt have an address as it stores data in CPU(processor)
}                    // and not in memory*/

int a=5;
int main()
{
	extern int a;
	printf("%d",a);
}
