#include <unistd.h>

/**
* main - Entry point
*
* Return: Always 0 (Success)
*/
int main(void)
{
	char a[]="and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(STDOUT_FILENO, a , sizeof(a)-1 );
	return (1);
}
