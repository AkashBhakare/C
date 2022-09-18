/* 
 * File:   main.c
 * Author: Akash
 *
 * Created on 18 September 2022, 11:28 am
 */

/*
 * Append string to the end of existing file
 */

#include "stdio.h"
#include "stdlib.h"
#include <stdbool.h>
#include <strings.h>
#include <string.h>
#include <errno.h>

void append_strings_to_file(FILE*);
void read_strings_from_file(FILE*);

int main() {
    FILE *fp = NULL;

    const char* filename = "d:/dummy.py";
    /* Open a file in at+ */
    fp = fopen(filename, "at+");
    if (fp == NULL) {
        char msgbuf[BUFSIZ];
        snprintf(msgbuf, sizeof (msgbuf), \
                "\nError Details :\n\tFile Name : %s" \
                 "\n\tError code : %d\n\tError Message : %s.\n", \
                filename, errno, strerror(errno));
        fputs(msgbuf, stderr);
        exit(errno);
    }

    append_strings_to_file(fp);
    
    //Reposition file pointer to the beginning of  the file
    rewind(fp);
    
    read_strings_from_file(fp);
    
    fclose(fp);
    return EXIT_SUCCESS;
}

void append_strings_to_file(FILE* fp){
    puts("Please enter some strings(Press \'end\' to stop) :");
    char buffer[BUFSIZ];
    do {
        /* Read a line from stdin */
        fgets(buffer, BUFSIZ, stdin);
        if (strcasecmp(buffer, "end\n") == 0) {
            break; //terminate the loop when user enters 'end'
        }
        /* Write the string to FILE fp*/
        fputs(buffer, fp);

    } while (true); //infinite loop
    return;
}

void read_strings_from_file(FILE* fp){
    char buffer[BUFSIZ];
    puts("\nThe Contents of the file are :\n");
    do {
        /* Read a line  from FILE fp */
        fgets(buffer, BUFSIZ, fp);
        if (feof(fp)) {
            break; //terminate the loop if end of file is encountered
        }
        /* write the string to stdout*/
        fputs(buffer, stdout);
    } while (true);
    /* close the file */
    fclose(fp);
    return;
}