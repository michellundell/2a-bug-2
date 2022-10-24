#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
	char *sP = malloc(26);
	strncpy(sP,"Haj pau deg, horret idau?", 26);

	/* 
	** loop through memory and print the chars until end of string
	** sP++ moves the pointer one step from current position.
	*/

	while( *sP != '\0' ) {
		printf("%c",*sP);
		*sP++;
	} 
	printf("\n");

	free(sP);
	
	return 0;
}
