/****************************************************************************
 *                                                                          *
 * File    :51_Single_Digit                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           02/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 /*
 * Accept an integer and check whether its a single digit integer */

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <limits.h>
#include <errno.h>
/*
int main(){
    int number;
    bool is_scan_success = false;
    printf("Please enter a integer : ");
    is_scan_success = scanf("%i", &number);
    if(is_scan_success == true){
        printf("The number =  %d\n",number);
    }else{
        fprintf(stderr,"Input has failed\n");
    }
    
    return EXIT_SUCCESS;
}
 * */

int main(){
    long long int number;
    bool is_scan_success = false;

    printf("Please enter a integer : ");
    is_scan_success = scanf("%lli", &number);
    
    if( is_scan_success == false){
        fprintf(stderr,"Input has failed! Please enter only digits\n");
        exit(EXIT_FAILURE);
    }
   
    if( number > INT_MAX || number < INT_MIN){
        fprintf(stderr,"Input out of the integer domain\n");
        fprintf(stderr,"Please enter integer value in the range of(%d to %d)",\
                INT_MIN,INT_MAX);
        exit(EXIT_FAILURE);
    }
    
    if(number / 10 == 0 ){
        printf("%lld is a single digit integer\n",number);
    }else{
        printf("%lld is not a single digit integer\n",number);
    }
    return EXIT_SUCCESS;
}
