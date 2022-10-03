#include <unistd.h>
/**
* _putchar - writes the character of c to standard output.
* @c:  the character to print.
*
* Return: on success 1.
* On error, -1 is returned, and errorno messages is set appropiately.
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
