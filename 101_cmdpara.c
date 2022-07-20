/****************************************************************************
 *                                                                          *
 * File    : 101_cmdpara.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char* argv[]) {
    printf("Number of Argument passed = %d\n",argc);
	printf("Program name i.e. 1st argument = %s\n",argv[0]);
	printf("The rest of the arguments are :\n");
	for(int idx = 1; idx < argc; ++idx){
		printf("%s\n",argv[idx]);
	}
    return EXIT_SUCCESS;
}
