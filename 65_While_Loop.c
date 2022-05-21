/****************************************************************************
 *                                                                          *
 * File    : 65_While_Loop                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

/*
 Accept the name of the student and greet him/her 5 times
 */

#include <stdio.h>
#include <stdlib.h>
/*
int main(void) {
    char name[20];
    printf("What's your name ? ");
    scanf("%19[a-z,A-Z ]", name);
    printf("Hello %s, Good Evening!\n", name);
    printf("Hello %s, Good Evening!\n", name);
    printf("Hello %s, Good Evening!\n", name);
    printf("Hello %s, Good Evening!\n", name);
    printf("Hello %s, Good Evening!\n", name);
   
    return EXIT_SUCCESS;
}
*/

/*
int main(void) {
    char name[20];
    unsigned int counter = 1;
    const unsigned int MAX_TIMES = 4;
    
    printf("What's your name ? ");
    scanf("%19[a-z,A-Z ]", name);
    
    while(counter <= MAX_TIMES ){
         printf("%u) Hello %s, Good Evening!\n", counter, name);
         counter = counter + 1;
    }
  
    return EXIT_SUCCESS;
}
*/


int main(void) {
    char name[20];
    
    unsigned int counter = 5;
    
    printf("What's your name ? ");
    scanf("%19[a-z,A-Z ]", name);
    
    while(counter >= 1 ){
         printf(" Hello %s, Good Evening!\n", name);
         counter = counter - 1;
    }
  
    return EXIT_SUCCESS;
}
