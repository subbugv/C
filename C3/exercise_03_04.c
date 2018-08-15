#include<stdio.h>

int main (void)
{
	float c;
	float f = 27.0;

	c = (f - 32) / 1.8;

	printf("%.02f degrees Fahrenheit equals %.2f Celsius", f, c);

	return 0;
}