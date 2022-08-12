/****************************************************************************
 *                                                                          *
 * File    : 114_VarArgs1.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/* <stdarg.h> provides the tools we'll need to write our 
 * own functions with variable-length argument lists.
 * <stdarg.h> declares one type (va_1ist) and defines several macros 
 * like va_start. va_arg, and va_end */
int add(int,...);

int main()
{
    int result;
    result = add(3,1,1,1);
    printf("Addition = %d\n",result);
    result = add(6,5,5,5,10,10,10);
    printf("Addition = %d\n",result);
    
    return EXIT_SUCCESS;
}

/* The ... symbol in the parameter list (known as an ellipsis) 
 * indicates that the parameter n is followed by a 
 * variable number of additional parameters*/

int add(int n,...) /* n must be at least 1 */
{
    /* Declaring such a variable of type va_list is mandatory 
     * for add() to be able to access the arguments that follow n. */
    va_list ap;
    int i;
    int current;
    int sum = 0;
    /* indicates where the variable-length part of the 
     * argument list begins (in this case,after n). 
     * A function with a variable number of arguments must have 
     * at least one "normal" parameter */
    va_start(ap,n);
    for (i = 1; i <= n; ++i){
       /* The word int indicates that we expect add's second 
        * argument to have int type.
        * fetches add's remaining arguments,  one by one, 
        * as it is executed inside a loop. */
        current = va_arg(ap, int);
        sum += current;
    }
   /* is required to "clean up" before  the function returns. 
    * (Or, instead of returning, the function might call va_start and 
    * traverse the argument list again.) */
    va_end(ap);
    return sum;
}
