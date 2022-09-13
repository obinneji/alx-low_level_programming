#include "main.h"
#include <stdio.h>
/**
* jack_bauer - print every minute of the day
*
* Return: Always 0
*/

void jack_bauer()
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			printf("%02d:%0d\n", hours, minutes);
			minutes++;
		}
		hours++;
		minutes = 0;
	}
}

