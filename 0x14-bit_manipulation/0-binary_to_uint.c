#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
/**
 *binary_to_uint - convert binary to decimal
 *@b: binary num as a string
 *Return: num after convert
 */


unsigned int binary_to_uint(const char *b)
{
int res = 0, bs = 1, len;

<<<<<<< HEAD
if (b == NULL)
=======
if (b == '\0')
>>>>>>> 665504cbf3a722b287b65fadf4fd2697ff80eda7
return (0);

len = strlen(b);


for (len -= 1; len >= 0; len--)
{

if (b[len] != '1' && b[len] != '0')
return (0);


res += (b[len] - '0') * bs;
bs *= 2;
}
return (res);
}
