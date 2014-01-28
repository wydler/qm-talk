#include "analyse.h"
#include <stdio.h>

int main( void )
{
	char string[128];
	char minChar = '\0';
	char maxChar = '\0';
	int length = 0;

	while( 1 )
	{
		printf( "Bitte Test-String eingeben: " );
		(void) scanf( " %127s", string );

		/* exit condition for (infinite) loop */
		if( (string[0] == 'q') && (string[1] == '\0') )
		{
			printf( "Programm wird beendet!\n" );
			break;
		}

		length = analyseMinMax( string, &minChar, &maxChar );
		printf( "length: %d, minChar: %c, maxChar: %c\n\n", length, minChar, maxChar );
	}

	return 0;
}
