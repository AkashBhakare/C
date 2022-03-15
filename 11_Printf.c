/****************************************************************************
 *                                                                          *
 * File    : Printf.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           15/02/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    int iVar    = 102;     /* Integer */
    char cVar   = 'A';    /* Character */
    float fVar  = 12.5676F; /* float */
    char str[10]= "impetus"; /* String */
    
//Argument list contains variable
    
    printf("Integer Value is = %d\n", iVar);
    printf("Character value is = %c\n", cVar);
    printf("Floating value is = %f\n", fVar);
    printf("The string is = %s\n", str);
    printf("Value of integer Variable = %c\n", iVar);
    printf("Character = %d\n", cVar);
    
//    Understanding return value of printf
    iVar = printf("iVar = %d", iVar);
    printf("\niVar = %d\n", iVar);

    iVar = 149;
    // expressions in the argument list
    printf("Square Root of integer = %lf\n", sqrt(iVar));
    printf("Result = %d\n", (iVar * 3 + 1));

    // constants in the argument list
    printf("Value = %d\n", 99999);
    printf("Character = %c\n", 'W');

    iVar = printf("%d",printf("%s","Hello Dear"));
    printf("\niVar = %d\n", iVar);

    iVar=printf("%d",printf("%s","Hello")+printf("%s","Bye"));
    printf("\ni = %d\n", iVar);

    return (EXIT_SUCCESS);
}
