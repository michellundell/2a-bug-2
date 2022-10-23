#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main(int argc, char **argv)
{
	char *sP = malloc(30);
	strcpy(sP,"Haj pau deg, horret idau?");

	/* 
	** loop through memory and print the chars until a zero is found 
	*/
	while( *sP++ != '\0' ) {
		printf("%c",*sP);
	} 

	return 0;
}
