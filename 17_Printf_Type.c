/****************************************************************************
 *                                                                          *
 * File    : 17_Printf_Type                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/03/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	char buffer[80];
	char smallBuffer[15];
	/*
	FILE *fp fopen("B:/CprogramCode01july2021/c_program/data.txt", "w");

	if (fp == NULL){
		fprintf(stderr, "Error Creating Strem");
		exit(EXIT_FAILURE);
	}
	*/


	//transffer the output to the specified 
	//predefined stream connected to monitor
	fprintf(stdout, "1)Value of PI is %.2f\n", 3.142789F);

	//transfer the output to the specified
	//predefined error stream

	fprintf(stderr,"2)Value of PI is %.2f\n",3.142789);

	//transfer the output to the specified string
	sprintf(buffer,"3)Value of PI is %.2f\n",3.142789);

	//transfer the output to the specified string
	//snprintf(smallBuffer, sizeof (smallBuffer), "5)Value of PI is %f\n", 3.142789);

    
    fclose(fp);
    return 0;	
}

