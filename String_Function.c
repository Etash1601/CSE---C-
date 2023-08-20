#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int len,len2;
	char name[] = "Ashish Ranjan";
	char name2[] = {'a','s','h','i','s','h'};
	printf("%s\n",name); //full string is printed
	printf("%c\n",name2[0]); //only one character is printed
	len=strlen(name);
	printf("%d\n",len);
	len2=strlen(name2);
	printf("%d\n",len2);
	return 0;
}
