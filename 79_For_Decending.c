/****************************************************************************
 *                                                                          *
 * File    : 79_For_Decending                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

//numbers in descending order from n to 1

int main(void) {
    int number;
    int counter;
    printf("Please enter a +ve Non Zero Integer: ");
    scanf("%i", &number);
    printf("Integers in the range of %d..1 are\n",number);
    //possible conditional expr: 
    //count > 0, count != 0 , counter >= 1
    for (counter = number; counter != 0; --counter) 
    {
        printf("\t%d\n", counter);
    }
    return (EXIT_SUCCESS);
}



// alternative method

//int main(void) {
//    int number;
//    
//    printf("Please enter a +ve Non Zero Integer: ");
//    scanf("%i", &number);
//    printf("Integers in the range of %d..1 are\n", number);
//
//    for (   ; number >= 1; --number) 
//    {
//        printf("\t%d\n", number);
//    }
//    return (EXIT_SUCCESS);
//}


// alternative method

//int main(void) {
//    int number;
//    
//    printf("Please enter a +ve Non Zero Integer: ");
//    scanf("%d", &number);
//    
//    printf("Integers in the range of %d..1 are\n", number);
//
//    for (   ; number != 0;  ) 
//    {
//        printf("\t%d\n", number--);
//    }
//
//    return (EXIT_SUCCESS);
//}



// alternative method
//
//int main(void) {
//    int number;
//    printf("Please enter a +ve Non Zero Integer: ");
//    scanf("%i", &number);
//    printf("Integers in the range of %d..1 are\n", number);
//
//    for ( ; number; ) 
//    {
//        printf("\t%d\n", number--);
//    }
//
//    return (EXIT_SUCCESS);
//}


// alternative method

//int main(void) {
//    int number;
//
//    printf("Please enter a +ve Non Zero Integer: ");
//    scanf("%d", &number);
//    printf("Integers in the range of %d..1 are\n", number);
//
//    for (;;) //Infinite loop
//    {
//        printf("\t%d\n", number--);
//        if (number == 0) { //terminating condition
//            break; //terminates loop when number becomes zero
//        } //end if
//    } //end for
//
//    return (EXIT_SUCCESS);
//}

//int main(void) {
//    int intVar;
//    unsigned int cnt;
//    long long int ans = 1LL;
//    printf("Please enter a +ve Non Zero integer:");
//    scanf("%i", &intVar);
//
//    for (cnt = 1U; cnt <= intVar; ans *= cnt++);
//    {
//        printf("Count = %u \t ans = %lld \n", cnt, ans);
//    }
//   
//    return (EXIT_SUCCESS);
//}



