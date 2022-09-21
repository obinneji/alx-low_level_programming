#include "main.h"
/**
* cap_string - capitalize all words of a string
* @x: string parameter
* Return: a capitalize string
*/

char *cap_string(char *x)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	for (i = 1; c[i] != '\0'; i++)
	{
		if ((c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n' || c[i - 1] == 'z' || c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}') && (c[i] > 'a' && c[i]
 < 'z'))
		{
			c[i] = c[i] - 32;
		}
	}
	return (c);
	
}
