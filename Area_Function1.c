#include <stdio.h>
void square();
void rectangle();
void circle();
int main()
{
    int ch,d;
    printf("Enter your choice:\n");
    printf("1. Area of Square\n");
    printf("2. Area of Rectangle\n");
    printf("3. Area of Circle\n");
    scanf("%d",&ch);
    switch(ch)
    {
        case 1:
            square();
            break;
        case 2:
            rectangle();
            break;
        case 3:
            circle();
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
void square()
{
    float a,area;
    printf("Enter side: ");
    scanf("%f",&a);
    area = a*a;
    printf("\nArea of Square: %f",area);
}
void rectangle()
{
    float a,b,area;
    printf("Enter two sides: ");
    scanf("%f %f",&a ,&b);
    area = a*b;
    printf("\nArea of Rectangle: %f",area);
}
void circle()
{
    float r,area;
    printf("Enter radius: ");
    scanf("%f",&r);
    area = 3.14*r*r;
    printf("\nArea of Circle: %f",area);
}
