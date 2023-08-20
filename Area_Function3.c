#include <stdio.h>
float square(float a);
float rectangle(float a,float b);
float circle(float r);
int main()
{
    int ch,d;
    float a,b,r,area;
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
            area = square(a);
            printf("\nArea of Square: %f",area);
            break;
        case 2:
            printf("Enter two sides: ");
            scanf("%f %f",&a ,&b);
            area = rectangle(a,b);
            printf("\nArea of Rectangle: %f",area);
            break;
        case 3:
            printf("Enter radius: ");
            scanf("%f",&r);
            area = circle(r);
            printf("\nArea of Circle: %f",area);
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
float square(float a)
{
    float area = a*a;
    return (area);
}
float rectangle(float a,float b)
{
    float area = a*b;
    return (area);
}
float circle(float r)
{
    float area = 3.14*r*r;
    return (area);
}
