#include "stdio.h"

int add( int i, int j ) {
  return i + j;
}

int main( int argc, char **argv[] )
{
	int i = 100;
	printf ("%s\n", "Hello, phabricator!" );
	printf ("%s\n", "second commit for Audit");
	printf ("%s\n", "third for Audit");

	printf( " i + j = %d \n", add( 500, 700 ) );
}
