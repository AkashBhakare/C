/****************************************************************************
 *                                                                          *
 * File    : 51_ifelse_Toggle                                                       *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/05/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/*
 * Accept an alphabet from user and toggle its case
 */
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/*
 * Accept an alphabet from user and toggle its case
 */

//Alternative I
//
//int main(void) {
//    char ch;
//    printf("Please enter a alphabet : ");
//    //scanf("%c",&ch);
//    ch = fgetc(stdin); 
//    /* check if the character is not alphabet*/
//    if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
//    {
//        fprintf(stderr,"Character is not a alphabet !\n");
//        exit(EXIT_FAILURE);
//    }
    //if the character is uppercase alphabet
    // if (ch >= 65 && ch <= 90) //Correct but complex
//    if (ch >= 'A' && ch <= 'Z')//Comparatively easy to understand
//    {
//        ch = ch + 32; // convert to lowercase
//        printf("The lowercase alphabet is %c\n", ch);
//    }
//    else
//    {
//        ch = ch - 32; //convert to uppercase
//        printf("The Uppercase alphabet is %c\n", ch);
//    }
//    return (EXIT_SUCCESS);
//}





/*
 *  if (!((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')))
    {
        printf("Character is not a alphabet !\n");
        exit(EXIT_FAILURE);
    }
   
 */

//Alternative II

// tolower() returns the lowercase equivalent of
// the argument passed to it if the argument is
// uppercase alphabet, otherwise returns the
// argument as it is
// toupper() returns the uppercase equivalent of
// the argument passed to it if the argument is
// lowercase alphabet, otherwise returns the
// argument as it is

int main(void) {
    char ch;
    printf("Please enter a alphabet : ");
    ch = fgetc(stdin);
   
//    isalpha() returns true if the character passed as
//    argument is a alphabet otherwise returns false
    if (!isalpha(ch))
    {
        fprintf(stderr,"\'%c\' is not a alphabet\n ", ch);
        exit(EXIT_FAILURE); //exit(1);
    }
  
//    isupper() returns true is the argument is
//    uppercase alphabet otherwise returns false
    if (isupper(ch))
    {
        ch = tolower(ch);
    }
    else
    {
        ch = toupper(ch);
    }
    printf("The alphabet is \'%c\'\n", ch);
    return (EXIT_SUCCESS);
}
