#include <stdio.h>
#include <stdlib.h>
/**
* main - a programm that print combination of all two digit.
* 
* Return: Always 0 (Success)
*/
int main(void)
{
 	int fTens;
	int fOnes;
	int sTens;
	int sOnes;
	int num, num2;

	for (num = 0; num <= 99; num++)
	{
		fTens = num / 10;
		fOnes = num % 10;

		for(num2 = 0; num2 <= 99; num++)
		{
			sTens = num2 / 10;
			sOnes = num2 % 10;
			
			if(fTens < sTens || (fTens == sTens && fOnes < sOnes))
			{
				putchar(fTens + '0');
				putchar(fOnes + '0');
				putchar(' ');
				putchar(sTens + '0');
				putchar(fOnes + '0');

					if (!(fTens == 9 && fOnes == 8))
					{
						
						putchar(',');
						putchar(' ');
					}
			}
		}	
	}
	
	putchar('\n');
	return (0);
}

