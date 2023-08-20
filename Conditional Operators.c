// A - Z           = 65 - 90
// a - z           = 97 - 122
// 0 - 9           = 48 - 57 
// special symbols = (0 - 47), (58 - 64), (91 - 96), (123 - 127)

#include <stdio.h>
int main()
{
	char ch;
	printf("Enter a character from keyboard: ");
	scanf("%c",&ch);
//	(ch>=97 && ch<=122) ? printf("Lower case alphabet"):printf("Not lower case alphabet");

	(ch>=0&&ch<=47)||(ch>=58&&ch<=64)||(ch>=91&&ch<=96)||(ch>=123&&ch<=127) ? 
	printf("Special symbol"):printf("Not a special symbol");
	return 0;
}
