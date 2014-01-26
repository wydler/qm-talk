#include <stdio.h>


int main( int argc, char *argv[] )
{
	int i = 0;

	if( argc >= 2 ) {
		printf( "Hello %s\n", argv[1] );
	} else {
		printf( "Hello World\n" );
	}

	for( i = 0; i < 10; i++ ) {
		printf( "%d ", i);
	}
	printf( "\n" );

	return 0;
}
