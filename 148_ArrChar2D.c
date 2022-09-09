/****************************************************************************
 *                                                                          *
 * File    : 148_ArrChar2D.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           31/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


// 2D char array of strings

// Accept 5 names and sort them in ascending order also 
// search for existence of certain name in the list

// SEARCHING
// SORTING -- BUBBLE & SELECTION
// DISPLAY
// ACCEPTING

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <strings.h> 
#include <stdbool.h>

/*#define can be used to define constant*/
#define ROW 5
#define COL 40 

/*#define can be used to replace 'C" code block*/
#define CLEAR_INPUT_STREAM   while(getchar()!='\n');

void sortAscendingByLastName(char [][COL]);
void sortDescendingByFirstName(char (*)[COL]);
void displayNames(char (*)[COL]);
void acceptNames(char [ROW][COL]);
size_t searchName(const char src[ROW][COL],const char nameToSearch[COL]);

int main() {
    char nameToSearch[ COL ];
    char namesList[ROW][COL];
    size_t rowno;
    
    acceptNames(namesList);
    
    printf("The original list of players:\n");
    displayNames(namesList);
    
    printf("Please enter the name to be searched: ");
    //fgets(nameToSearch, COL, stdin);
    scanf("%39[a-zA-Z0-9 ]",nameToSearch);
    CLEAR_INPUT_STREAM;
    rowno = searchName(namesList, nameToSearch);
    if(rowno > 0 ){
        printf("Found name '%s' at row number %zu\n",nameToSearch, rowno);
    }else{
        printf("Name '%s' not present in the list\n",nameToSearch);
    }
//    sortAscendingByLastName(namesList);
//    printf("The name of players are (after sorting in ascending order):\n");
//    displayNames(namesList);
   sortDescendingByFirstName(namesList);
   printf("The names of the players are(after sorting in descending order):\n");
//    displayNames(namesList);
    return 0;
}

void acceptNames(char a[ROW][COL]) {
    for (size_t i = 0U; i < ROW; i++) {
        printf("Enter the first and last Name of player no.%zu: ", (i + 1));
       // fgets(a[i], COL, stdin);
         scanf("%39[a-zA-Z0-9 ]",a[i]);
         CLEAR_INPUT_STREAM;
    }
    return;
}

void displayNames(char (*cptr)[COL]) {
    for (size_t i = 0u; i < ROW; i++) {
        printf("\n\t%s",(char*)cptr[i]);//  (char*) *(cptr + i)); 
    }
    printf("\n");
    return;
}

/*Linear Search*/
size_t searchName(const char list[][COL], const char nameToSearch[]) {
     for ( size_t idx = 0U; idx < ROW; idx++) {//Linear Search
        if (strcasecmp(list[idx], nameToSearch) == 0) {
            return idx+1; //return the row number if search is successful
        }
    }
    return 0; // return 0 if search is unsuccessful

}

// selection sort

void sortAscendingByLastName(char list[][COL]) {
    size_t i;
    size_t j;
    char temp[ COL ];
    for (i = 0u; i < ROW - 1; i++) {
        for (j = i + 1u; j < ROW; j++) {
            const char * p1 = strrchr(list[i], ' ') + 1;
            const char * p2 = strrchr(list[j], ' ') + 1;
            if (strcasecmp(p1, p2) > 0)
            {
                strncpy(temp, list[i], sizeof (temp));
                strncpy(list[i], list[j], sizeof (temp));
                strncpy(list[j], temp, sizeof (temp));
            }
        }
    }
    return;
}

// Bubble sort

void sortDescendingByFirstName(char list[][COL]) {
    char tempName[ COL ];
    for (size_t i = 1U; i < ROW; i++) { // Number of passes
        for (size_t j = 0U; j < (ROW - i); j++) {  // Number of comparison on every pass
            if (strcasecmp(list[j + 1], list[j]) > 0) //strcasecmp
            { //if name at (j+1) is greater than name at j; swap them
                strncpy(tempName, list[j], COL);
                strncpy(list[j], list[j + 1], COL);
                strncpy(list[j + 1], tempName, COL);
            }
        }
    }
    return;
}


