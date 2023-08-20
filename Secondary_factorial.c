#include <stdio.h>
#include <conio.h>
int main()
{
	int i,j,n=1,k;
	long s=1;
	printf("Enter an integer: ");
	scanf("%d",&k);
    for(i=1;i<=k;i++)
	{
		n = n*i;
        if(n==k)
        break;
	}
	if(n==k)
    {
        if(i%2==0)
        {
        printf("S(%d) = ",n);
        for(j=2;j<=i;j=j+2)
	        {
		    s = s*j;
            printf("%d * ",j);
	        }
        printf("= %d",s);
        }
        else
        {
        printf("S(%d) = ",n);
        for(j=1;j<=i;j=j+2)
	        {
		    s = s*j;
            printf("%d * ",j);
	        }
        printf("= %d",s);
        }
    }
    else
        printf("\n-1");
	return 0;
}