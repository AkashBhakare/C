
/* 
 * File:   main.c
 * Author: Akash
 *
 * Created on 15 September 2022, 11:09 pm
 */


#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE* logfile;
    logfile = fopen("B:\\MatrixOperation.c", "w");
    if (!logfile) {
        perror("fopen failed");
        return EXIT_FAILURE;
    }
    fputs("Sir Please stop the lecture!", logfile);
    fclose(logfile);
    return EXIT_SUCCESS;
}

