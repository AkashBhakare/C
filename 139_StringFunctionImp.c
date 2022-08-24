/****************************************************************************
 *                                                                          *
 * File    : 139_StringFunctionImp.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           21/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * IT3.c
 * Implement following operations on string
 * with and without using pointers
 *
 * 1) Length
 * 2) Palindrome
 * 3) String comparison
 * 4) Copy
 * 5) Reverse
 * 6) Substring
 * 7) String concatenation
 *
 * Created on: 02-Aug-2013
 * Author: Hrishi
 */

/*
 * Please note : If your compiler does not support bool type;
 * replace bool with int and true with 1 and false with 0
 */

#include <stdio.h>
#include <stdlib.h>
#include "stdbool.h"
#include "ctype.h"

void acceptString(char[]); //accept string

size_t length(char[]); //without using pointer
size_t length_p(char *); //using pointer

char * reverse(char[]); //without pointer; using alias
char * reverse_p(char *); //using pointer

char* stringCopy_p(char*, char*); //using pointers
char* stringCopy(char[], char[]); //without using pointers

int stringCompare(char[], char[]); //without using pointer
int stringCompare_p(char*, char*); //using pointer

bool isPalindrome(char[]); // without using Pointer
bool isPalindrome_p(char*); //using pointer

char * subString(char[], char[]); //without using pointer
char * subString_p(char*, char*); //using pointer

char * stringConcat(char[], char[]); //without using pointer
char * stringConcat_p(char*, char*); // using pointer

void getMenuChoice(); //Display Selection Menu
int selectMenuChoice(); //Select operation to perform
void operateAsPerChoice(int, char[], char[]); //Execute selected operation

#define EXIT_CHOICE 16

int main() {
    char str1[100]; // 	input string
    char str2[100]; // 	input string
    int choice; //	menu choice holder
    do {
        getMenuChoice();
        choice = selectMenuChoice();
        operateAsPerChoice(choice, str1, str2);
    } while (choice != EXIT_CHOICE);
    return EXIT_SUCCESS;
}

void getMenuChoice() {
    printf("\n *** String Operations *** \n");

    printf("1)Accept First String\n");
    printf("2)Accept Second String\n");

    printf("3)Find string length (without Pointers)\n");
    printf("4)Find string length (using Pointers)\n");

    printf("5)Reverse First String (without Pointers)\n");
    printf("6)Reverse Second String (using Pointers)\n");

    printf("7)Copy Second String into First (without Pointers)\n");
    printf("8)Copy Second String into First (using Pointers)\n");

    printf("9)Compare First String with Second (without Pointers)\n");
    printf("10)Compare First String with Second (using Pointers)\n");

    printf("11)Check if the First String is Palindrome (without Pointers)\n");
    printf("12)Check if the Second String is Palindrome (using Pointers)\n");

    printf("13)Check if the second String is a sub string of First(using Pointers)\n");
    printf("14)Check if the second String is a sub string of First(without Pointers)\n");

    printf("15)Concatenate second string to end of First\n");

    printf("16)Exit\n");
    return;
}

int selectMenuChoice() {
    int choice;
    printf("Please enter your choice (1-15):");
    fflush(stdout);
    scanf("%d", &choice);
    return choice;
}

void operateAsPerChoice(int choice, char str1[], char str2[]) {
    size_t len; //for string length
    int flag; //used to catch return value of String compare function
    bool isPldrome; //used to catch return value of isPalindrome function
    char *subStrLoc; //used to catch return value of subString function
    char *dest;

    switch (choice) {
        case 1:
            acceptString(str1);
            break;
        case 2:
            acceptString(str2);
            break;
        case 3:
            len = length(str1);
            printf("The length of string 1 = %d\n", len);
            break;
        case 4:
            len = length_p(str2);
            printf("The length of string 2 = %d\n", len);
            break;
        case 5:
            reverse(str1);
            printf("The reverse of string 1 = %s\n", str1);
            break;
        case 6:
            reverse_p(str2);
            printf("The reverse of string 2 = %s\n", str2);
            break;
        case 7:
            stringCopy(str1, str2);
            printf("The string 1 = %s\n", str1);
            printf("The string 2 = %s\n", str2);
            break;
        case 8:
            stringCopy_p(str1, str2);
            printf("The string 1 = %s\n", str1);
            printf("The string 2 = %s\n", str2);
            break;
        case 9:
            flag = stringCompare(str1, str2);
            if (flag == 0) {
                printf("string1 == string2 \n");
            } else {
                if (flag < 0) {
                    printf("string1 < string2 \n");
                } else {
                    printf("string1 > string2 \n");
                }
            }
            break;
        case 10:
            flag = stringCompare_p(str1, str2);
            if (flag == 0) {
                printf("string1 == string2 \n");
            } else {
                if (flag < 0) {
                    printf("string1 < string2 \n");
                } else {
                    printf("string1 > string2 \n");
                }
            }
            break;
        case 11:
            isPldrome = isPalindrome(str1);
            if (isPldrome == true) {
                printf("The string 1 i.e. %s is Palindrome\n", str1);
            } else {
                printf("The String 1 i.e. %s is not a Palindrome\n", str1);
            }
            break;
        case 12:
            isPldrome = isPalindrome_p(str2);
            if (isPldrome == true) {
                printf("The string 1 i.e. %s is Palindrome\n", str2);
            } else {
                printf("The String 1 i.e. %s is not a Palindrome\n", str2);
            }
            break;
        case 13:
            subStrLoc = subString(str1, str2);
            if (subStrLoc == NULL) {
                printf("\"%s\" is not found in \"%s\"\n", str1, str2);
            } else {
                printf("\"%s\" is found in \"%s\" at position %d\n", str2, str1,
                        (int) (subStrLoc - str1) + 1);
            }
            break;
        case 14:
            subStrLoc = subString_p(str1, str2);
            if (subStrLoc == NULL) {
                printf("\"%s\" is not found in \"%s\"\n", str1, str2);
            } else {
                printf("\"%s\" is found in \"%s\" at position %d\n", str2, str1,
                        (int) (subStrLoc - str1) + 1);
            }
            break;
        case 15:
            dest = stringConcat(str1, str2);
            printf("Str1 = %s\n", str1);
            printf("Str2 = %s\n", str2);
            break;
        case 16:
            printf("Finished with String operations!\n");
            break;
        default:
            printf("Incorrect choice !\n");
    }
}

void acceptString(char str[]) {
    printf("Please enter a string :");
    fflush(stdout);
    scanf("%s", str);
    return;
}

//string length with pointers

size_t length_p(char *string) {
    char *ptr = string;
    //till end of string is not reached
    while (*ptr != '\0'){
        ++ptr;
    }
    return (size_t)(ptr-string);
}

//string length without using pointers

size_t length(char str[]) {
    size_t len = 0;
    //till end of string is not reached
    while (str[len] != '\0') {
        ++len;
    }
    return len;
}

//implementation of string reverse_p without using pointer

char * reverse(char arr[]) {
    int i = 0;
    int j;
    char ch;
    //traversed to the end of the string
    while (arr[i] != '\0') {
        i++;
    } //end while

    i--; //point to the last character in the string

    j = 0; //point to first character in the string

    //swap characters at ith and jth position
    while (j < i) {
        ch = arr[i];
        arr[i] = arr[j];
        arr[j] = ch;
        i--;
        j++;
    } //end while

    return arr; //return the base address of reveresed
} //string

//implementation of string reverse_p using pointers

char * reverse_p(char *base_address) {
    char* ptr1 = base_address; //make ptr1 point to the first character
    char* ptr2 = base_address; //make ptr2 point to the first character;
    char ch; //temporary variable for swapping
   
    //traverse ptr2 to the end of string
    while (*ptr2 != '\0') {
        ptr2++;
    } //end while

    ptr2--; //make ptr2 point to last character
    //instead of '\0'

    //swap characters
    while (ptr1 < ptr2) {
        ch = *ptr2;
        *ptr2 = *ptr1;
        *ptr1 = ch;
        ptr1++;
        ptr2--;
    }

    return base_address;
}

//user-defined function which replicates functioning
//of library function strcpy() using pointers

char * stringCopy_p(char *dest, char *src) {
    char *ptr = dest; //make ptr point to beginning of destination

    //Traverse till end of source is not encountered
    while (*src != '\0') {
        *ptr = *src;
        ptr++;
        src++;
    }
    *ptr = '\0'; //terminate destination with null
    return dest;
}

//user-defined function which replicates functioning
//of library function strcpy() without using pointers

char * stringCopy(char dest[], char source[]) {
    int i = 0;
    while (source[i] != '\0') {
        dest[i] = source[i];
        i++;
    }
    dest[i] = '\0';
    return dest;
}

// Comparison is case sensitive

int stringCompare_p(char *s1, char *s2) {
    //continue till end of either of the strings is
    //not encountered
    while (*s1 != '\0' && *s2 != '\0') {
        if (*s1 == *s2) //if matching characters are found
        {
            s1++;
            s2++;
        } else {
            break; //terminate loop if matching characters
        } //are not found

    } // end while

    return (*s1 - *s2); //returns difference in ASCII
    //values between the corresponding characters from
    //both the strings
}

// Comparison is case sensitive

int stringCompare(char s1[], char s2[]) {
    int idx = 0;
    //continue till end of either of the strings is
    //not encountered
    while (s1[idx] != '\0' && s2[idx] != '\0') {
        if (s1[idx] == s2[idx]) //if matching characters are found
        {
            idx++;
        } else {
            break; //terminate loop if matching characters
        } //are not found

    } // end while

    return (s1[idx] - s2[idx]); //returns difference in ASCII
    //values between the corresponding characters from
    //both the strings
}

//Check if the string is palindrome without using pointer

bool isPalindrome(char str[]) {
    int idx1 = 0;
    int idx2 = 0;
    bool flag = true;

    //Traverse idx2 to the end of string
    while (str[idx2] != '\0') {
        idx2++;
    }
    idx2--; //make it point to the last character

    //start comparing first and last character
    while (idx1 < idx2) {
        //compare characters
        if (tolower(str[idx1]) == tolower(str[idx2])) {
            idx1++;
            idx2--;
        } else {
            flag = false;
            break;
        }
    }
        return flag;
}

//Check if the string is palindrome  using pointer

bool isPalindrome_p(char *ptr1) {
    char *ptr2 = ptr1;
    bool flag = true;

    //Traverse ptr2 to the end of string
    while (*ptr2 != '\0') {
        ptr2++;
    }
    ptr2--; //make it point to the last character

    //start comparing first and last character
    while (ptr1 < ptr2) {
        //compare characters
        if (toupper(*ptr1) == toupper(*ptr2)) {
            ptr1++;
            ptr2--;
        } else {
            flag = false;
            break;
        }
    }
    return flag;
}

char * subString_p(char *s1, char *s2) {
    char * ptr1;
    char * ptr2;
    int flag = 0;
    //till end of 1st string is not reached or 2nd
    //string is not found
    while (flag == 0 && *s1 != '\0') {
        ptr2 = s2;
        ptr1 = s1;
        //till end of 2nd string is not reached
        while (*ptr2 != '\0') {
            if (*ptr1 != *ptr2) //if matching character
            { //are not found
                flag = 0;
                break; //terminate inner while loop
            }
            ptr1++;
            ptr2++;
        } //end of inner while loop

        if (*ptr2 == '\0') {
            flag = 1; // 2nd string is found in 1st
        } else {
            s1++;
        }
    } // end of outer while loop

    if (flag == 0) {
        return NULL;
    } else {
        return s1;
    }
}

//implementation of strstr() without using pointer

char * subString(char string[], char pattern[]) {
    int i = 0;
    int j = 0;

    //till end of string or pattern is not reached
    while (string[i] != '\0' && pattern[j] != '\0') {
        //if different characters are found
        if (string[i] != pattern[j]) {
            //reposition i to the place where the 1st
            //matching character was found
            i = i - j;
            i++;
            j = 0; //reposition j to the beginning of pattern
        } else //if matching characters are found
        {
            i++;
            j++;
        }
    } //end of while loop

    //if end of pattern is reached. This will happen only
    //when all characters were found matching
    if (pattern[j] == '\0') {
        return &string[i - j];
    } else {
        return NULL;
    }
}

// Implementation of strcat (String concatenation)

char * stringConcat(char str1[], char str2[]) {
    int idxStr1 = 0;
    int idxStr2 = 0;

    while (str1[idxStr1] != '\0') {
        idxStr1++;
    }
    do {
        str1[idxStr1++] = str2[idxStr2++];
    } while (str2[idxStr2] != '\0');
    str1[idxStr1] = '\0';
    return str1;
}
