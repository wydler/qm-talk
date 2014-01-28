#include "analyse.h"

int analyseMinMax( char string[], char * minChar, char * maxChar )
{
	int i = 0;

	*minChar = string[0];
	*maxChar = string[0];

	while( string[i] != '\0' )
	{
		if( string[i] > *maxChar )
		{
			*maxChar = string[i];
		}
		if( string[i] < *minChar )
		{
			*minChar = string[i];
		}
		i++;
	}

	return i;
}
