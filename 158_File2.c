
/* 
 * File:   main.c
 * Author: Akash
 *
 * Created on 15 September 2022, 11:27 pm
 */
/*Reading and writing strings to and from 
 * a text file */
// USING FGETS AND FPUTS
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include <strings.h>
#include <errno.h>
#define MAX_LEN 80

int main() {
    char str[MAX_LEN + 1];
    FILE* fp = NULL;

    // Opening a file in write mode
//    fp = fopen("d:/data.txt", "wt");
//    // Checking whether opening operation is successful
//    if ( !fp ) {
//        perror("Opening File : ");
//    }
//    //Writing strings to the file till "end" is not entered
//    puts("Please enter strings; enter \'end\' to stop");
//    do {
//        //Read string from stdin
//        fgets(str, MAX_LEN, stdin);
//        //write string to FILE
//        fputs(str, fp);
//        //write \n ie line terminator to FILE if gets/scanf is used
//        //fputc('\n', fp);
//    } while (strcasecmp(str, "end\n") != 0);
//
//    fclose(fp);

    // Opening the file for reading
    fp = fopen("B:\\MatrixOperation.c", "rt");
    if (!fp ) {
        perror("While opening the file for reading :");
        exit(errno);
    }
    printf("\nThe contents of the file are : \n");
    // Reading strings from the
    do {
        //Read string from FILE
        fgets(str, MAX_LEN, fp);
        //If EOF is not reached
        if (!feof(fp)) {
            //Display the string on console   
            fputs(str, stdout);
        } else {
            break; //terminate the loop
        }
    } while (1);
    //closing the file
    fclose(fp);
    return EXIT_SUCCESS;
}

