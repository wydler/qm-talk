#include "analyse.h"

#include <assert.h>
#include <string.h>


int main( void )
{
	char string[] = "Testing";
	int length = 0;

	length = analyseMinMax( string, NULL, NULL );

	assert( length == 7 );

	return 0;
}
