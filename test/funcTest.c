#include <assert.h>
#include "../src/func.h"

int main( void )
{
	char string[] = "Testing";
	char minChar = '\0';
	char maxChar = '\0';
	int length = 0;

	length = analyse( string, &minChar, &maxChar );
	assert( length == 7 );
	assert( minChar == 'T' );
	assert( maxChar == 't' );

	return 0;
}