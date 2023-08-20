#include <stdio.h>
#include <conio.h>
int main()
{
	int a=21;
	int b;
	b=a;
	printf("This statement shows about = operator : %d \n",b); // value of b keeps
	b+=a;                                                      // changing as we
	printf("This statement shows about += operator : %d \n",b); // calculate new value
	b-=a;                                                       // of b everytime
	printf("This statement shows about -= operator : %d \n",b);
	b*=a;
	printf("This statement shows about *= operator : %d \n",b);
	b/=a;
	printf("This statement shows about /= operator : %d \n",b);
	b%=a;
    printf("This statement shows about %= operator : %d \n",b);
	b&=a;
	printf("This statement shows about &= operator : %d \n",b);
	b>>=a;
	printf("This statement shows about >>= operator : %d \n",b);
	b<<=a;
	printf("This statement shows about <<= operator : %d \n",b);
	b^=a;
	printf("This statement shows about ^= operator : %d \n",b);
	b!=a;
	printf("This statement shows about != operator : %d \n",b);
	return 0;
}
