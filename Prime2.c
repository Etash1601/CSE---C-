#include <stdio.h>
#include <conio.h>
int main()
{
    int a,n,b;
    int d=0;
    int e=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    b=n-2;
	for(int i=2;i<n;i++)
	{
        a=n%i;
        if(a!=0)
        {
        d++;
        }
        else
        {
        e++;
        }
    }
    if(d==b)
    {
    printf("Prime Number");
    }
    else if(e>0)
    {
    printf("Not a prime number");
    }
    return 0;
}   