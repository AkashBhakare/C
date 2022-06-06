/****************************************************************************
 *                                                                          *
 * File    : continue                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           05/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
/*
 Accept number 'n' and toggle case of 'n' alphabets
 */


//int main(void){
//    int alphabet_counter = 1;
//    char alpha;
//    int limit;
//    printf("How many alphabets case do you plan to toggle ? ");
//    scanf("%i",&limit);
//    
//    while(alphabet_counter <= limit){
//        printf("Enter an alphabet : ");
//        
////        clear input stream
//        while(getchar()!=10); // '\n'
//        
//        scanf("%c", &alpha);
//        
//        if (!isalpha(alpha)){
//            fprintf(stderr,"Entered character \'%c\' is not a alphabet!\n",alpha);
//            continue; //transfers the control to conditional test
//        }
//        
//        if(isupper(alpha)){
//            printf("The lowercase equivalent of \'%c\' is \'%c\'\n", \
//                    alpha, tolower(alpha));
//        }else{
//            printf("The uppercase equivalent of \'%c\' is \'%c\'\n", \
//                    alpha, toupper(alpha));
//        }
//        ++alphabet_counter;
//    }
//    
//    return EXIT_SUCCESS;
//}

//int main(void){
//    int counter = 0;
//    const int LIMIT = 10; 
//   
//    while(++counter <= LIMIT){
//        if(counter % 3 == 0){
//            continue;
//        }
//        printf("Counter = %d\n", counter);
//        
//    }
//    return EXIT_SUCCESS;
//}

int main(void) {
    int counter = 0;
    const int LIMIT = 10;

    while (counter <= LIMIT) {

        printf("Counter = %d\n", ++counter);
        if (counter % 2 != 0) {
            continue;
        }

    }
    return EXIT_SUCCESS;
}
