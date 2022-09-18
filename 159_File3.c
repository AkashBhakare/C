/* 
 * File:   main.c
 * Author: Akash
 *
 * Created on 18 September 2022, 11:18 am
 */



/*
 * Read and display the file created in File2.c
 * program as it is stored in the file
 */
/*Reading and writing strings to and from 
 * a text file */
// USING FGETS AND FPUTS
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <errno.h>
#include <ctype.h>
#define MAX_LEN 80

size_t count_characters_in_file(const char* filename);
size_t count_words_in_file(const char* filename);
size_t count_lines_in_file(const char* filename);

int main(int argc, char* argv[]) {

    int const EXPECTED_NUMBER_OF_ARGUMENTS = 2;
    if (argc != EXPECTED_NUMBER_OF_ARGUMENTS) {
        fprintf(stderr, "Incorrect Number of arguments passed to the program!\n");
        fprintf(stderr, "usage : counter <filename>\n");
        exit(EXIT_FAILURE);
    }

    size_t characterCounter = count_characters_in_file(argv[1]);
    printf("\nCharacter count of the file = %zu\n", characterCounter);

    size_t wordCounter = count_words_in_file(argv[1]);
    printf("\nWord count of the file = %zu\n", wordCounter);

    size_t lineCounter = count_lines_in_file(argv[1]);
    printf("\nLine count of the file = %zu\n", lineCounter);

    return EXIT_SUCCESS;
}

size_t count_characters_in_file(const char* filename) {
    // Opening the file for reading
    FILE* fp = fopen(filename, "rt");
    if (fp == NULL) {
        char msgbuf[BUFSIZ];
        snprintf(msgbuf, sizeof (msgbuf),
                "\nError Details :\n\tFile Name :%s\n\tFunction Name: %s"
                "\n\tLine No : %d\n\tError code : %d\n\tError Message : %s.\n",
                __FILE__, __func__, __LINE__, errno, strerror(errno));
        fputs(msgbuf, stderr);
        exit(errno);
    }

    size_t characterCounter = 0U;
    do {
        /* Reads Single Character at a time */
        int ch = fgetc(fp);
        if (ch != EOF) {
            //fputc(ch, stdout); //to print the file contents
            if (!ispunct(ch) && !isspace(ch) && ch != '\n' && ch != '\t') {
                characterCounter++;
            }
        }
    } while (!feof(fp));

    fclose(fp); //never forget

    return characterCounter;
}

size_t count_words_in_file(const char* filename) {
    // Opening an existing file for reading
    FILE* fp = fopen(filename, "rt");
    if (fp == NULL) {
        char msgbuf[BUFSIZ];
        snprintf(msgbuf, sizeof (msgbuf),
                "\nError Details :\n\tFile Name :%s\n\tFunction Name: %s"
                "\n\tLine No : %d\n\tError code : %d\n\tError Message : %s.\n",
                __FILE__, __func__, __LINE__, errno, strerror(errno));
        fputs(msgbuf, stderr);
        exit(errno);
    }

    size_t wordCounter = 0U;
    char word[BUFSIZ];
    do {
        /* Reads Single word at a time */
        fscanf(fp, "%s", word);
        if (feof(fp)) { //if end of file is encountered
            break;
        }
        //to printf the words from the file
        //printf("%s ", word);
        wordCounter++;

    } while (true);

    fclose(fp); //never forget

    return wordCounter;
}

size_t count_lines_in_file(const char* filename) {
    // Opening an existing file for reading
    FILE* fp = fopen(filename, "rt");
    if (fp == NULL) {
        char msgbuf[BUFSIZ];
        snprintf(msgbuf, sizeof (msgbuf),
                "\nError Details :\n\tFile Name :%s\n\tFunction Name: %s"
                "\n\tLine No : %d\n\tError code : %d\n\tError Message : %s.\n",
                __FILE__, __func__, __LINE__, errno, strerror(errno));
        fputs(msgbuf, stderr);
        exit(errno);
    }

    size_t lineCounter = 0U;
    char line[BUFSIZ];
    do {
       // fgets() stops extraction of data from
        // the stream when MAX-1 characters have
        // been read or when '\n' is encountered
        fgets(line,BUFSIZ,fp);
       //to print the lines from the file
       // printf("%s ", line);
        lineCounter++;

    } while (!feof(fp));

    fclose(fp); //never forget

    return lineCounter;
}