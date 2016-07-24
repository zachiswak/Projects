#include<stdio.h>

char line[100];/*line of input data*/
float kilometers;
float miles;

int main()
{
	printf("enter kilometers: ");
	
	/*below takes input somehow*/
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%f", &kilometers);
	
	printf("you entered %f kilometers\n", kilometers);
	
	printf("%f kilometers in miles is %f miles", kilometers, kilometers * 0.6213712);
	
	
	
	
return (0);	
}
