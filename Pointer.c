#include <stdio.h>
#include <conio.h>
#include <math.h>
/*int main()
{
	int a=20; // actual variable declaration
	int * b; // pointer variable declaration
	b = &a; // storing the address of the another variable
	printf("Variable of a = %d\n",a);
	printf("Address of a = %p\n",&a);
	printf("Address of a using pointer variable = %p\n",b);
	return 0;
}*/



/*void fun(int,int);
int main()
{
	int i=5,j=2;
	fun(i,j);
	printf("%d %d\n",i,j);
	return 0;
}
void fun(int i,int j)
{
	i=i*i;
	j=j*j;
}*/



/*void fun(int *,int *);
int main()
{
	int i=5,j=2;
	fun(&i,&j);
	printf("%d %d\n",i,j);
	return 0;
}
void fun(int *i,int *j)
{
	*i=*i * *i;
	*j=*j * *j;
}*/



/*int main()
{
	float a=13.5;
	float *b,*c;
	b=&a;
	c=b;
	printf("%u %u %u\n",&a,b,c);
	printf("%f %f %f %f %f",a,*(&a),*&a,*b,*c);
	return 0;
}*/



/*int main()
{
	float p=23.24;
	int *q, **r;
	q=&p;
	r=&q;
	printf("%f %f\n",*q,**r);
	return 0;
}*/



/*int main()
{
	char ch='A';
	int k=35;
	float a=3.14;
	printf("%p %p %p\n",&ch,&k,&a);
	return 0;
}*/



/*void function(int *);
int main()
{
	int i=35,*z;
	z = function(&i);
	printf("%d\n",z);
	return 0;
}
void function(int *m)
{
	return (*m + 2);
}*/
