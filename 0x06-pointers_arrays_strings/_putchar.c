#include "main.h"
#include <unistd.h>
/**
<<<<<<< HEAD
* _putchar - writes the character c to stdout
* @c: The character to print
*
* Return: On success 1.
* On error, -1 is returned, and errno is set appropriately.
=======
* _putchar - writes the character
* @c: The character to print
*
* Return: On success 1 -1 if fail
>>>>>>> 774622a4f8cc2e520b95ff3214783522717e7c3e
*/
int _putchar(char c)
{
return (write(1, &c, 1));
<<<<<<< HEAD
}
=======
}
>>>>>>> 774622a4f8cc2e520b95ff3214783522717e7c3e
