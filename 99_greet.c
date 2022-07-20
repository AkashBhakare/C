/****************************************************************************
 *                                                                          *
 * File    : 99_greet.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

#define MIN_NUMBER_ARGS 2

int main(int argc, char* argv[]) {
    if(argc < MIN_NUMBER_ARGS){
		fprintf(stderr,"you should greet atleast one friend!\n");
		exit(EXIT_FAILURE);
	}
	for(int idx = 1; idx < argc; ++idx){
		printf("Hi %s!, good Evening!\n",argv[idx]);
	}
    return EXIT_SUCCESS;
}
