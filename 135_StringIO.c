/****************************************************************************
 *                                                                          *
 * File    : 135_StringIO.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           12/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
 * Difference between 
 * 1) puts()/fputs()
 * 2) gets()/fgets()
 * 
 */

void getsputDemo(void);
void fgetsfputsDemo(void);
void fgetsfputsFile(void);
void scanfPrintfDemo(void);

int main(void) {
    //    getsputDemo();
    //    fgetsfputsDemo();
    //    fgetsfputsFile();
    scanfPrintfDemo();
    return 0;
}

void getsputDemo(void) {
    char str[10];
    printf("Please enter a string:");
    gets(str);
    puts("The String is : ");
    puts(str);
    return;
}

/*
 fgets(char *str, int count, FILE *stream ) 
 * Reads at most count - 1 characters from the given file stream and stores 
 * them in the character array pointed to by str.
 */
void fgetsfputsDemo(void) {
    char str[10];
    printf("Please enter a string:");
    fgets(str, sizeof (str), stdin);
    fputs("The String is : ", stdout);
    fflush(stdout);
    fputs(str, stdout);
    fflush(stdout);
    fputs("Hello", stdout);
    fflush(stdout);
    return;
}

void fgetsfputsFile(void) {
    char str[80];
    FILE *inputFile = fopen("E:/data.txt", "r"); //source 
    FILE *outputFile = fopen("E:/output.txt", "w"); //destination

    /*Reading from file*/
    fgets(str, sizeof (str), inputFile);

    /*Writing to a file*/
    fputs(str, outputFile);

    fclose(inputFile);
    fclose(outputFile);

}

void scanfPrintfDemo() {
    const int MAXLEN = 80;
    char str[MAXLEN];
//    {
//        printf("Please enter a string : ");
//        //* Stops extracting data from the input stream moment 
//        // * any whitespace character is encountered*/
//        scanf("%s", str);
//        printf("the string = %s", str);
//        fflush(stdout);
//    }
    
    /*Undefined behaviour if the input supplied is larger then the array size */
//    {
//        char str[10];
//        printf("Please enter a string : ");
//        scanf("%s",str);
//        printf("String = %s\n",str);
//    }
    /*Using scanset to extract string containing embedded spaces*/
    {
        char str[15];
        printf("Please enter a string : ");
        scanf("%14[a-zA-Z0-9 ]",str);
        printf("String = %s\n",str);
    }
    return;
}
