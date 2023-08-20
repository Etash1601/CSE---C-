#include <stdio.h>
#include <conio.h>
int main()
{
	int i,n=1,k;
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
        if(n%2==0)
        {
        printf("S(%d) = ",n);
        for(i=2;i<=n;i=i+2)
	        {
		    s = s*i;
            printf("%d * ",i);
	        }
        printf("= %d",s);
        }
        else
        {
        printf("S(%d) = ",n);
        for(i=1;i<=n;i=i+2)
	        {
		    s = s*i;
            printf("%d * ",i);
	        }
        printf("= %d",s);
        }
    }
    else
        printf("\n-1");
	printf("\nSum of the numbers = %d",s);
	return 0;
}