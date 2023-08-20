#include <stdio.h>       // Read or Write a file in Binary File
#include <stdlib.h>
struct threeNum
{
	int n1, n2, n3;
};
int main()
{
	int num;
	struct threeNum m1;
	FILE *ptr1;
	if ((ptr1 = fopen("D:\\purnea.bin","wb"))==NULL) // r = rb, w = wb, w+ = wb+ in binary file
	{
		printf("Error in File");
		exit(1);
	}
	for(num=1;num<5;++num)
	{
		m1.n1 = num;
		m1.n2 = 5*num;
		m1.n3 = 5*num + 1;
		fwrite(&m1,sizeof(struct threeNum),1,ptr1); // sizeof shows bits to see if values given to
        // n1,n2,n3 are int or not, and 1 shows no. of data present i.e. which set of data is to be
        // taken from for loop like 1 --> 2,10,11
        //                          2 --> 3,15,16
        //                          3 --> 4,16,17
        //                          4 --> 5,25,26
	}
	fclose(ptr1);
	return 0;
}
