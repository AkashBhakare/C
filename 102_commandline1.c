/****************************************************************************
 *                                                                          *
 * File    : 102_commandline1.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/*
 * Command line argument intro
 */
int main(int argc, char* argv[]) {
    const int EXPECTED_NUMBER_OF_ARGUMENTS = 2;
    if (argc != EXPECTED_NUMBER_OF_ARGUMENTS)
    {
        fprintf(stderr, "Incorrect Number of arguments\n");
        fprintf(stderr,"Usage : greet <name>");
        exit(EXIT_FAILURE);
    }
    printf("Hello %s ! Good Morning!\n", argv[1]);
    return (EXIT_SUCCESS);
}

/*
 int main(int argc, char* argv[]) {
    const int MINIMUM_NUMBER_OF_ARGUMENTS = 2;
    if (argc < MINIMUM_NUMBER_OF_ARGUMENTS)
    {
        fprintf(stderr, "Incorrect Number of arguments\n");
        fprintf(stderr,"Usage : greet <name> [<name>]");
        exit(EXIT_FAILURE);
    }
	
	for(int i = 1; i < argc; i++){
		printf("Hello %s ! Good Morning!\n", argv[i]);
	}
	
	
	int i = 1;
	while(argv[i]!=NULL){
		printf("Hello %s ! Good Morning!\n", argv[i]);
		i++;
	}
	
	for(char **p = &argv[1]; *p!=NULL; p++){
		printf("Hello %s ! Good Morning!\n", *p);
	}
	
    return (EXIT_SUCCESS);
}

 
