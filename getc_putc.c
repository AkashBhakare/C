#include <stdio.h>
#include <stdlib.h>
/****************************************************************************
 *                                                                          *
 * Function: getc_putc                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           11/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

int main(void)
{
    char ch1;
	char ch2;

	FILE* inputFile = fopen("d:\\data.txt","r");
	FILE* outputFile = fopen("d:\\impetus.txt","w");

	/*Read charater and stdin*/
	ch1 = getc(stdin);

    /*send character to stdout*/
	putc(ch1,stdout);
	putc(10,stdout);
	fflush(stdout);

	/*Read the data from user-defined stream*/
	ch2 = getc(inputFile);

	/*Send the output to stdout*/
	putc(ch2,outputFile);

	/*Close the stream*/
	fclose(inputFile);
	fclose(outputFile);

    return EXIT_SUCCESS;
}

