#include "analyse.h"

#include <assert.h>
#include <string.h>


int main( void )
{
	char string[] = "Testing";
	char minChar = '\0';
	char maxChar = '\0';
	int length = 0;

	length = analyseMinMax( string, &minChar, &maxChar );

	assert( length == 7 );
	assert( minChar == 'T' );
	assert( maxChar == 't' );

	return 0;
}
