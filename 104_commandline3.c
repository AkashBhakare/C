/****************************************************************************
 *                                                                          *
 * File    : 104_commandline3.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/*
 * command line basic calculator
 */
int main(int argc, char** argv) {
    float n1;
    float n2;
    char sign;
    const int EXPECTED_NUMBER_OF_ARGUMENTS = 4;

    if (argc != EXPECTED_NUMBER_OF_ARGUMENTS)
    {
        fprintf(stderr, "Incorrect number of arguments\n");
        fprintf(stderr,"USAGE :  calc <value> <operator> <value>  \n");
        exit(EXIT_FAILURE);
    }
	/* convert string to float */
    n1 = strtod
    n2 = atof(argv[3]);
    sign = argv[2][0]; // *(*(argv+2)+0)

    switch (sign)
    {
        case '+':
            printf("\t\t %.2f + %.2f = %.2f \n",n1, n2, n1 + n2);
            break;
        case '-':
            printf("\t\t %.2f - %.2f = %.2f\n", n1, n2, n1 - n2);
            break;

        case 'x':
            printf("\t\t %.2f x %.2f = %.2f \n", n1, n2, n1 * n2);
            break;

        case '/':
            printf("\t\t %.2f / %.2f = %.2f \n", n1, n2, n1 / n2);
            break;
        case '%':
            printf("\t\t %.2f %% %.2f = %d\n", n1, n2, (int)n1 % (int)n2);
            break;
        case '$':
            printf("\t\t %.2f $ %.2f = %lf \n", n1, n2, pow(n1, n2));
            break;
        default:
            printf("Unknown operator \n");
    }
    return (EXIT_SUCCESS);
}

 
