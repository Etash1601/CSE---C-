#include<stdio.h>
#include<conio.h>
int main()
{
    int i=0;
    while(i<=255)         //for(i=0;i<=255;i++)
    {
        printf("%c = %d\n", i, i);    //%c prints ascii value of i from 0-255
        i++;
    }
    return 0;
}