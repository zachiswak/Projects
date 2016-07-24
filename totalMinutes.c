#include <stdio.h>
char line[100];
int hours;
int minutes;

int main()
{
	printf("we will calculate the total number of minutes for a given amount of time\nfirst, enter the number of hours: ");
	
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &hours);
	
	printf("now enter minutes left over after subtracting the complete hours: ");
	
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &minutes);
	
	printf("\nyou entered %d hours and %d minutes\n", hours, minutes);
	printf("your total is %d minutes", (hours * 60) + minutes );
	
	
	return 0;
}

