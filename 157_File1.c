
/* 
 * File:   main.c
 * Author: Akash
 *
 * Created on 15 September 2022, 11:15 pm
 */
/*Reading and writing characters to and from a text file */

#include<stdio.h>
#include<stdlib.h>
#include <errno.h>
#include <string.h>

void understand_file_pointer() {
    FILE* fp = NULL;
    printf("Size of fp %zu bytes\n", sizeof (fp));
    printf("Size of FILE  = %zu bytes\n", sizeof (FILE));
}

int file_creation_failure_demo(const char* fname) {
    char msgbuf[BUFSIZ] = {'\0'};
    FILE* fp = fopen(fname, "rt"); // r == rt
    if (fp == NULL) {
        snprintf(msgbuf, sizeof (msgbuf),
                "\nError Details :\n\tFile Name :%s\n\tFunction Name: %s"
                "\n\tLine No : %d\n\tError code : %d\n\tError Message : %s.\n",
                __FILE__, __func__, __LINE__, errno, strerror(errno));
        fputs(msgbuf, stderr);
        exit(errno);
    }
}


/*Write one character at a time*/
int create_file_for_writing(const char* fname) {
    
    /*Opens a new file for writing*/
    FILE* fp = fopen(fname, "w"); // w == wt
    if (fp == NULL) //fopen function function has failed
    {
        char err_msg[100];
        snprintf(err_msg, sizeof (err_msg), "Trying to create a file %s", fname);
        perror(err_msg);
        exit(errno);
    }

    printf("Please enter characters (Press enter to stop)\n");
    int ch;
    do {
        ch = fgetc(stdin); //Read from Pre-defined stream
        fputc(ch, fp); //Write to user-defined Stream
    } while (ch != '\n');

    //    fflush(fp);
    fclose(fp);
    return 0;
}

/*reads one character at a time*/
int read_file_content(const char* filename) {
    /*opens an existing file for reading*/
    FILE *fp = fopen(filename, "rt");
    if (fp == NULL) //fopen function function has failed
    {
        char err_msg[100];
        snprintf(err_msg, sizeof (err_msg), "Trying to create a file %s", filename);
        perror(err_msg);
        exit(errno);
    }
    
    printf("\nThe contents of the file are : \n");
    do {
        int ch = fgetc(fp); //Read from User Defined stream
        if (ch != EOF) {
            fputc(ch, stdout); //write to predefined stream
        }

    } while (!feof(fp)); // ch != EOF);
    // ch != -1 // !feof(fp) // ! eof(fp)
    //    fflush(stdout);
    fclose(fp);
    return 0;
}

int main(int argc, char **argv) {

//    understand_file_pointer();
//
//    const char* incorrect_file_path = "h:/data.txt";
//    file_creation_failure_demo(incorrect_file_path);

    const char *fname = "B:\\MatrixOperation.c";
    create_file_for_writing(fname);
    read_file_content(fname);
    
    return 0;
}

