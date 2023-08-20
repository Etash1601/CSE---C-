/*paper size of a0 has dimensions 1189mm * 841mm. each subsequent size a(n) is defined as a(n-1) cut in half, 
parallel to its shorter sides. thus paper of size a1 would have dimensions 841mm * 594mm. write a program to 
calculate and print paper sizes a0, a1, a2,........ a8.*/

#include <stdio.h>
int main()
{
    int width = 1189;
    int height = 841;
    int a; /*to store value of width because once we put value of height in width in for-loop then width itself
    loses its own value */
    for(int i=0;i<=8;i++)
    {
        printf("A%d : %d x %d \n", i, width, height);
        a = width; //1189
        width = height; //841
        height = a/2; //594
    }
    return 0;
}