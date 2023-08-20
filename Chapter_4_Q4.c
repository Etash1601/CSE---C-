#include <stdio.h>
#include <conio.h>
int main()
{
    float weight,height,bmi;
    printf("Enter weight in kilograms: ");
    scanf("%f",&weight);
    printf("Enter height in meters: ");
    scanf("%f",&height);
    bmi = weight/(height*height);
    if(bmi<15)
    printf("Starvation and BMI = %f",bmi);
    else if(bmi>=15.1 && bmi<=17.5)
    printf("Anorexic and BMI = %f",bmi);
    else if(bmi>=17.6 && bmi<=18.5)
    printf("Underweight and BMI = %f",bmi);
    else if(bmi>=18.6 && bmi<=24.9)
    printf("Ideal and BMI = %f",bmi);
    else if(bmi>=25 && bmi<=25.9)
    printf("Overweight and BMI = %f",bmi);
    else if(bmi>=30 && bmi<=30.9)
    printf("Obese and BMI = %f",bmi);
    else if(bmi>=40)
    printf("Morbidly Obese and BMI = %f",bmi);
    return 0;
}