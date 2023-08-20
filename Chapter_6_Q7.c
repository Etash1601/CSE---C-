#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	int a,b,c,d,x,y,num;
	printf("Enter the range: ");
	scanf("%d",&num);
	for(a=0;a<num;a++)
    {
        for(b=0;b<num;b++)
        {
            for(c=0;c<num;c++)
            {
               for(d=0;d<num;d++)
               {
                   // a, b, c, d are not equal
                   if((a!=b)&&(a!=c)&&(a!=d)&&(b!=c)&&(b!=d)&&(c!=d))
                   {
				   x = pow(a,3) + pow(b,3);
                   y = pow(c,3) + pow(d,3);
                   }
                   if(x==y)
                   {
                   int number = pow(a,3) + pow(b,3);
                   printf("%d = %d, %d, %d, %d\n",number,a,b,c,d);
                   }
			   }
            }
        }
    }
	return 0;
}
