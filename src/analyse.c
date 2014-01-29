#include "analyse.h"
#include <string.h>

int analyseMinMax( char string[], char * minChar, char * maxChar )
{
	int i = 0;

    if(minChar!=NULL){
	*minChar = string[0];
    }
    if(maxChar!=NULL){
	*maxChar = string[0];
    }

	while( string[i] != '\0' )
	{
    if(maxChar!=NULL){
		if( string[i] > *maxChar )
		{
			*maxChar = string[i];
		}
    }

    if(minChar!=NULL){
		if( string[i] < *minChar )
		{
			*minChar = string[i];
		}
    }
		i++;
	}

	return i;
}
