// In digital world colors are specified in Red-Green-Blue (RGB) format, with values of R, G, B varying on 
// an interger scale from 0 to 255. In print publishing the colors are mentioned in Cyan-Magenta-Yellow-Black 
// (CMYK) format, with values of C, M, Y, and K varying on a real scale from 0.0 to 1.0. 
// Write a program that converts RGB color to CMYK color as per the following formulae: 

// While = Max(Red/255, Green/255, Blue/255)
// Cyan = (White-Red/255)/(White)
// Magenta = (White-Green/255)/(White)
// Yellow = (White-Blue/255)/(White)
// Black = 1-White
// Note that of the RGB values are all 0, then the CMY values are all 0 and the K value is 1.

#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float red, green, blue;
	float white,cyan, magenta, yellow, black;
	float max;
	printf("Enter values of Red, Green and Blue in range (0-255) : ");
	scanf("%f %f %f",&red,&green,&blue);
	
	if(red==0 && green==0 && blue==0) // when red,green and blue is 0 then only black has a value which is 1
    {
		cyan = magenta = yellow = 0;
		black = 1;
	}
	else
	{
		red = red/255;
		green = green/255;
		blue = blue/255;
		
		max = red; // assuming that red is max
		if(green>max) // reassigning value of max to whoever is greatest
		{
			max = green;
		}
		if(blue>max)
		{
			max = blue;
		}
		white = max; // giving white the max value
		cyan = (white-red)/white;
		magenta = (white-green)/white;
		yellow = (white-blue)/white;
		black = 1-white;
	}
	printf("Cyan = %f\n",cyan);
	printf("Magenta = %f\n",magenta);
	printf("Yellow = %f\n",yellow);
	printf("Black = %f\n",black);
	return 0;
}
