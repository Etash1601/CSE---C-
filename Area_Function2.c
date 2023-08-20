#include <stdio.h>
void square(float a);
void rectangle(float a,float b);
void circle(float r);
int main()
{
    int ch,d;
    float a,b,r;
    printf("Enter your choice:\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            printf("Enter side: ");
            scanf("%f",&a);
            square(a);
            break;
        case 2:
            printf("Enter two sides: ");
            scanf("%f %f",&a ,&b);
            rectangle(a,b);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%f",&r);
            circle(r);
            break;
        default:
            printf("Invalid choice:\n");
            printf("\nEnter 0 if you want to run the program again: ");
            scanf("%d",&d);
            if(d==0)
                main();
            break;
    }
    return 0;
}
void square(float a)
{
    float area = a*a;
    printf("\nArea of Square: %f",area);
}
void rectangle(float a,float b)
{
    float area = a*b;
    printf("\nArea of Rectangle: %f",area);
}
void circle(float r)
{
    float area = 3.14*r*r;
    printf("\nArea of Circle: %f",area);
}
