#include<stdio.h>
/**
* print_alphabet - print alphabets in lower case
* Description: prints a-z all in lower case
*
*/

void print_alphabet(void)
{
	char c1;
	
	for (c1 = 'a'; c1 <= 'z'; ++c1)
	{
		printf("%c", c1);
	}
}
