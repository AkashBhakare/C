/****************************************************************************
 *                                                                          *
 * File    : 105_commandline4.c                                                         *
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
 * System environment variable
 */
int main(int argc, char* argv[], char *env[]) {
    char **p;
    //Accessed all arguments passed to main
    for (p = &argv[1]; *p != NULL; p++)
    {
        printf("Argument = %s\n", *p);
    }
    //Accessed all environment information
    printf("List of environment variables :\n");
    for (p = &env[0]; *p != NULL; p++)
    {
        printf("%s\n", *p);
    }
    return (EXIT_SUCCESS);
}
