#include <stdio.h>       // Read a file in Binary File
#include <stdlib.h>
struct threeNum
{
	int n1, n2, n3;
};
int main()
{
	int n;
	struct threeNum num;
	FILE *ptr1;
	if ((ptr1 = fopen("D:\\purnea.bin","rb"))==NULL) // r = rb, w = wb, w+ = wb+ in binary file
	{
		printf("Error in your File");
		exit(1);
	}
	for(n=1;n<5;++n)
	{
		fread(&num,sizeof(struct threeNum),1,ptr1); // [sizeof] shows bits to see if values given to n1,n2,n3
        // are int or not, and [1] shows no. of data present i.e. which set of data is to be taken from for loop
        printf("\nn1 = %d\nn2 = %d\nn3 = %d\n",num.n1, num.n2, num.n3);
	}
	fclose(ptr1);
	return 0;
}