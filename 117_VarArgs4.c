/****************************************************************************
 *                                                                          *
 * File    : 117_VarArgs4.c                                                         *
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
#include <stdbool.h>
#include <string.h>
void printLongestString(const char *str, ...);

int main(void) {
    printLongestString("akash", "sujit", "vishnu", "rohit", "sudarshan","nandana",NULL);
    return EXIT_SUCCESS;
}

void printLongestString(const char *str, ...) {
    const char *currentArg;
    const char *longestStr;
    size_t length;
    va_list ap;
    va_start(ap, str);
    longestStr = str;
    length = strlen(str);
    while(true) {
        currentArg = va_arg(ap, const char*);
        if ( currentArg == NULL ){
            break;
        }
        if( strlen(currentArg) > length){
            length = strlen(currentArg);
            longestStr = currentArg;
        }
    }
    printf("Longest String is \"%s\" with length %zu\n",longestStr,length);
    va_end(ap);
    return ;
}

/*
 
 void printLongestString(const char *str, ...) {
    va_list ap;
    const char *currentArg;
    const char *longestStr;
    size_t length = strlen(str);
    va_start(ap, str);
    longestStr = str;

    while( currentArg = va_arg(ap, const char*)) {
        if( strlen(currentArg) > length){
            length = strlen(currentArg);
            longestStr = currentArg;
        }
    }
    printf("Longest String is \"%s\" with length %zu\n",longestStr,length);
    va_end(ap);
    return ;
}
 
 */
