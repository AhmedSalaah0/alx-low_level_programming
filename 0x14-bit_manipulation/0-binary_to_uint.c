#include <stdio.h>
#include <math.h>
#include <string.h>
/**
 *
 *
 */
unsigned int binary_to_uint(const char *b){
	int i, j = 0;
	unsigned int res = 0;
	
	for (i = strlen(b) - 1; i >= 0; i--, j++) 
	{
	if (b[i] == '1') 
	{
	res += pow(2, j);
	}
	else if (b[i] != '0')
	{
	return (0);
	}
	}

return (res);
}
