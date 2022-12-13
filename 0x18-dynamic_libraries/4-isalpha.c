#include"main.h"
#include<ctype.h>
/**
* _isalpha - checks if input is alphabet or not
* @c: the input to be tested
* Description: This function checkes if a input  is
* an alphabbet or not
* Return: 1 if alphabet and 0 if not
*/

int _isalpha(int c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
