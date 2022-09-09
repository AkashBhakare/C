/****************************************************************************
 *                                                                          *
 * File    : 141_String_Function.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           20/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/


//program demonstrating all library functions from String.h

//diff bet scanf and gets
//illegal operations
//**** string functions demo*****

#define _GNU_SOURCE
#define  __MISC_VISIBLE
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
#include "wchar.h"
#include <stdbool.h>
#include <strings.h>

#define MAXLEN 80
void strLengthDemo(void);
void stringLiteralDemo(void);
void stringIssues(void);
void stringCopyDemo(void);
void stringCompareDemo(void);
void compare_non_ASCII_string();
void compareMemoryBlock(void);
void stringConcatDemo(void);
void stringConcatDemoNoOverFlow(void);
void searchCharacterInString(void);
void searchCharacterMemoryBlock();
void searchString(void);
void strpbrkDemo(void);
void strspnDemo(void);
void stringNumbers(void);
void setString(void);
void strtokDemo(void);
void strCaseChangeDemo(void);

int main() {
    stringIssues();
    /*stringLiteralDemo();
    printf("String Manipulation Demo\n");
    strLengthDemo();
    stringCopyDemo();
    stringCompareDemo();
    compareMemoryBlock();
    compare_non_ASCII_string();
    stringConcatDemo();
    stringConcatDemoNoOverFlow();
    searchCharacterInString();
    searchCharacterMemoryBlock();
    searchString();
    strpbrkDemo();
    strspnDemo();
    stringNumbers();
    setString();
    strtokDemo();
    strCaseChangeDemo();
	*/
    return 0;
}

void stringIssues() {
    char str[MAXLEN] = "anil";
    char arr[MAXLEN] = "anil"; //initializing possible

    //address of 2 array are compared and not their content
    if (str == arr) //it is always false
    {
        printf("%s and %s are Same\n", arr, str);
    } else {
        printf("%s and %s are Different\n", arr, str);
    }

    if (str[3] == arr[3]) //individual elements of
    { //array can be compared
        printf("Equal\n");
    } else {
        printf("DIFFERENT\n");
    }
    //one array cannot be assigned to another array directly
    // arr = str;   //error
    arr[0] = str[2]; //individual elements can be assigned
    printf("\n%s %s\n", arr, str);

    return;
}

// finding length of string

void strLengthDemo() {
    char str[80] = "CHANDRA SHEKAR";
    size_t len;

    //argument is a character array containing a string
    len = strlen(str);
    printf("String = %s and length = %zu\n", str, len);

    //argument is a string constant
    len = strlen("FIROZ");
    printf("Length (ASCII string) = %zu\n", len);

    //argument is a string constant
    len = wcslen(L"FIROZ");
    printf("Length (wide char string)=%zu\n", len);
    len = wcslen(L"अजय");
    printf("Length (wide char string)=%zu\n", len);

    len = strnlen("IMPETUS", 10);
    printf("Length of string is %zu\n", len);
    len = strnlen("IMPETUS IT SERVICES PVT LTD", 10);
    printf("Length of string is %zu\n", len);

    printf("ASCII string SIZE %zu\n", sizeof ("ajay"));
    printf("Wide string SIZE %zu\n", sizeof (L"अजय"));
    return;
}

// string copy

void stringCopyDemo() {
    char string1[MAXLEN] = "1234567890";
    char string2[MAXLEN] = "abcdefghijklmnopqrstuvwxyz";

    size_t limit = 5;

    //    printf("Please enter the string : ");
    //    fgets(str, MAXLEN, stdin);
    // second argument is a array containing a string.'\0' is also copied.
    strcpy(string2, string1);
    printf("string 1 = %s\n", string1);
    printf("string 2 = %s\n", string2);
    // second argument is a string constant
    strcpy(string2, "ABCDEFG");
    printf("string  = %s\n", string2);

    // copies n characters but string1 is not null terminated
    strncpy(string1, string2, limit);
    printf("string  = %s\n", string1);
    string1[limit] = '\0'; //terminating str
    printf("string  = %s\n", string1);
    printf("string  = %s\n", string2);

    memcpy(string1, "1234567890abcde", limit);
    printf("string  = %s\n", string1);

    double d_arr1[MAXLEN] = {12.34, 45.67, 34.67, 344.666, 45, 33.5};
    double d_arr2[MAXLEN];
    double d_arr3[MAXLEN];
    memcpy(d_arr2, d_arr1, sizeof (d_arr2));
    memcpy(d_arr3, d_arr1, sizeof (double)*3);

    char dest[10];
    char src[20] = "Hrishikesh";
#ifdef __STDC_LIB_EXT1__
    strncpy_s(dest, sizeof (dest), src, 5U);
    printf("%s\n", dest);
#endif
    return;
}

// strspn / strcspn example

void strspnDemo(void) {
    char *string1 = "1234567890";
    char *string2 = "5123DC8";
    char *string3 = "789DC";
    int length;
    /* The strspn() function returns the index of the first 
     * character found. This value is equal to the length 
     * of the initial substring of string1 that consists 
     * entirely of characters from string2. 
     */
    length = strspn(string1, string2);
    printf("Character where strings differ is "\
        "at position %d\n", length);

    length = strcspn(string1, string3);
    printf("Character where strings intersect is"\
        " at position %d\n", length);

    return;
}

//The strpbrk() function locates the first occurrence 
//in the string pointed to by string1 of any character 
//from the string pointed to by string2.

void strpbrkDemo(void) {
    char *s1 = "abcdefghijklmnopqrstuvwxyz";
    char *s2 = "#@!k";
    char *ptr;

    ptr = strpbrk(s1, s2);

    if (ptr != NULL) {
        printf("strpbrk() found first character: %c at %d\n",
                *ptr, (int) ((ptr - s1) + 1));
    } else {
        printf("strpbrk() didn't find character in set\n");
    }
    return;
}


// string  set

void setString() {
    char str[MAXLEN] = "Hello bye";
    char ch;
    size_t limit = 6;
    char str1[MAXLEN] = "almost every programmer should know memset!";
    printf("\nPlease enter the character : ");
    scanf("%c", &ch);
    printf("\n The Original string is %s \n", str);
    //	set all characters
    //    strset(str, ch);
    //    printf("\n The New string is %s ", str);
    //    strnset(str, '$', 4);
    memset(str, ch, limit);
    printf("\n The New string is %s \n", str);
    memset(str1, '-', limit);
    puts(str1);
    return;
}


// Number Functions

void stringNumbers() {
    char str[MAXLEN] = "0x64";
    char str1[MAXLEN] = "123.45";
    char str2[MAXLEN] = "123456ABCD";
    float floatValue;
    int intValue;
    long int longIntValue;
    char *end;
    //     printf("%s\n",str+1);

    floatValue = atof(str1);
    printf("Ans = %f\n", floatValue + 2);
    //
    //    converts a byte string to an floating point value 
    floatValue = strtof(str1, NULL);
    printf("Ans = %f\n", floatValue);
    //
    //    converts a byte string to an long value 
    longIntValue = strtol(str, NULL, 16);
    printf("Ans = %ld\n", longIntValue);
    //
    //  converts a byte string to an integer value 
    intValue = strtod(str, NULL);
    printf("Ans = %d\n", intValue);
    intValue = strtod(str2, NULL);
    printf("Ans = %d\n", intValue);
    //    Reference to an already allocated object 
    //    of type char*, whose value is set by the 
    //    function to the next character in str after 
    //    the numerical value.
    intValue = strtod(str2, &end);
    printf("Ans = %s\n", end);
    return;
}

/*
 * strtok()
 */

void stringToken(void) {
    char input[MAXLEN] =
            "Ajay,Sunil Dutt,Sanjay,Geeta Bali,Neeta";
    char *p;
    p = strtok(input, " ");
    printf("\t%s\n", p);

    do {
        p = strtok(NULL, " ");
        if (p != NULL) {
            printf("\t%s\n", p);
        } else {
            break;
        }
    } while (1); //infinite  loop

    return;
}

/*
     strtok places a NULL terminator
     in front of the token, if found

     p = strtok(input, ",");
     if ( p != NULL )
             printf("%s\n", p );

     A second call to strtok using a NULL
     as the first parameter returns a pointer
     to the character following the token

     p = strtok(NULL, ",");

 */
// search for a string in the string ( from beginning )
#define _GNU_SOURCE

void searchString() {
    char string[MAXLEN] = "Hello Dear, lets go shopping nearby";
    char pattern[MAXLEN] = "ear";
    char *ptr;

    //    case sensitive
    ptr = strstr(string, pattern);
    //    ignores case (non-standard function
    //    ptr = strcasestr(string, pattern);

    if (ptr == NULL) {
        printf("The string is not found\n");
    } else {
        printf("The string is found at address %p"\
                " and position %d\n", ptr, (int) ((ptr - string) + 1));
    }

    //search for all occurrences
    ptr = string;
    while (true) {
        ptr = strstr(ptr, pattern); //Case Sensitive
        //        ptr = strcasestr(ptr, pattern); //Case insensitive
        if (ptr == NULL) {
            break;
        }
        printf("The string position %d\n", (int) ((ptr - string) + 1));
        ptr++; //increment pointer to address of next character
    }
    return;
}


// search for a character in the string
//( from beginning  )

void searchCharacterInString() {
    char str[MAXLEN];
    char *ptr;
    char charToSearch;

    printf("Please enter a string : ");
    fgets(str, MAXLEN, stdin);

    printf("Enter the character to be searched in the string: ");
    scanf("%c", &charToSearch);
    //  will give the first occurrence
    //    ptr = strchr(str, charToSearch);
    //  will give the Last occurrence
    ptr = strrchr(str, charToSearch);
    if (ptr == NULL) {
        printf("The character \'%c\' not found\n", charToSearch);
    } else {
        printf("The character %c found at position %d\n",
                charToSearch, (int) ((ptr - str) + 1));
    }

    // will print all occurrence
    printf("\nSearching for all occurrence \n");
    ptr = str;
    while (ptr = strchr(ptr, charToSearch)) {
        printf("The character %c found at position %d\n",
                charToSearch, (int) ((ptr - str) + 1));
        ptr++; //increment pointer to address of next character
    }


    //    while (true) //infinite loop
    //    {
    //        ptr = strchr(ptr, charToSearch);
    //        if (ptr == NULL) {
    //              break;
    //          }
    //         printf("The character %c found at position %d\n",
    //                    charToSearch, (int) ((ptr - str) + 1));
    //        ptr++; //increment pointer to address of next character
    //    }
    return;
}

void searchCharacterMemoryBlock() {
    char arr[] = {'a', 'b', 'c', 'd', 'e', 'a', 'R', 'Q', 'W', 'T'};
    char searchChar = 'q';
    char *ptr;
    size_t limit = sizeof (arr);
    ptr = memchr(arr, searchChar, limit);
    if (ptr == NULL) {
        printf("The character \'%c\' not found in first %zu bytes\n",
                searchChar, limit);
    } else {
        printf("The character %c found at position %d\n",
                searchChar, (int) ((ptr - arr) + 1));
    }
}


//string concatenate
#include <locale.h>

void stringConcatDemo() {
    char str1[MAXLEN] = "Think";
    char str2[MAXLEN] = "Pad";
    char str3[MAXLEN] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    size_t limit = 4;

    strcat(str1, str2);
    printf("string 1 = %s\n", str1);
    printf("string 2 = %s\n", str2);

    //  Second argument is a string constant
    strcat(str1, " ");
    strcat(str1, "Edge");
    printf("string 1 = %s\n", str1);

    //  Concatenate specified number of characters
    strncat(str3, str1, limit);
    printf("string 3 = %s\n", str3);

    //    //Working with wide characters
    //    wchar_t str[50] = L"Земля, прощай.";
    //    wcscat(str, L" ");
    //    wcscat(str, L"В добрый путь.");
    ////    wcscat(str, L"अजय");
    //    setlocale(LC_ALL, "en_US.utf8");
    //    printf("%ls\n", str);
    return;
}

//string concatenate
#include <locale.h>

void stringConcatDemoNoOverFlow() {
    char str1[10] = "Think";
    char str2[10] = "Padding";
    char str3[10] = "ABCDE";

    strcat(str1, str2);
    printf("string 1 = %s\n", str1);
    printf("string 2 = %s\n", str2);

    strlcat(str3, str2, sizeof (str3));
    printf("string 3= %s\n", str3);
    printf("string 2 = %s\n", str2);

    return;
}


//string compare

void stringCompareDemo() {

    char str1[MAXLEN];
    char str2[MAXLEN];
    int flag;
    size_t limit = 4;
    printf("Please enter the First string: ");
    fgets(str1, MAXLEN, stdin);
    printf("Please enter the Second string: ");
    fgets(str2, MAXLEN, stdin);

    flag = strncasecmp(str1, str2, limit);
    if (flag == 0) {
        printf("Both strings are equal\n ");
    } else {
        if (flag > 0) {
            printf("str1 > str2 %d\n", flag);
        } else {
            printf("str1 < str2 %d\n", flag);
        }
    }
    return;
}

//	strcmp(str,arr);
//	stricmp(str,arr);
//	strcmpi(str,arr);
//	strncmp(str,arr,4);
//	strncmpi(str,arr,4);
//	strnicmp(str,arr,4);
//      Strict ASCII :  strcasecmp(str,arr)
//                      strncasecmp(str,arr)

void compareMemoryBlock() {
    //    char buffer1[] = "DWgAOtP12df0";
    //    char buffer2[] = "DWgaOtP12Df0";
    int buffer1[] = {1, 2, 3, 4, 555555};
    int buffer2[] = {1, 2, 3, 4, 555555, 45, 451};

    int n;

    n = memcmp(buffer1, buffer2, sizeof (buffer1));

    if (n > 0)
        printf("buffer1 is greater than buffer2.\n");
    else
        if (n < 0)
        printf("buffer1 is less than buffer2.\n");
    else
        printf("buffer1 is the same as buffer2.\n");

    return;
}

/*Check on command prompt and open the source in notepad++*/
void compare_non_ASCII_string() {
    wchar_t str1[MAXLEN] = L"अबकडज ";
    wchar_t str2[MAXLEN] = L"अबकडव ";
    int flag;
    flag = wcscmp(str1, str2);
    if (flag == 0) {
        printf("Both strings are equal\n ");
    } else {
        if (flag > 0) {
            printf("str1 > str2 %d\n", flag);
        } else {
            printf("str1 < str2 %d\n", flag);
        }
    }
    return;
}

// string reverse
/*
int main()
{
        char str[80] = "ANIL";
        int i = 9876;
         
        // argument is a character array containing a string
        printf("\nString = %s ", str );
        strrev( str );
        printf("\nString = %s ", str );
        //string constant as argument
        printf("\n\nString = %s ", strrev("TARZAN") );

        //Simple application : reverse number

        //converts integer to string
        itoa( i, str, 10 );
        //reverse the string
        strrev( str );
        //converts string to integer
        i = atoi(str);   //atol()
        printf("\n i = %d", i );
        return 0;
}
 */

// changing case - Non Standard

void strCaseChangeDemo() {
    char str[80] = "Chandra Shekar 123";
    printf("\nthe string = %s ", str);

    //argument is a character array containing a string
    strupr(str);
    printf("\nthe string = %s ", str);

    strlwr(str);
    printf("\nthe string = %s ", str);

    //string constant as argument
    printf("\n\nString = %s", strlwr("ANIL@yahoo.com"));
    printf("\nString = %s ", strupr("Sujay@mail.com"));
    return;
}
//passing string constants to a function
//expression involving string constant

void stringLiteralDemo() {
    char str[80] = "Utkarsha";
    printf("Address of str = %p\n", str);
    printf("Address of utkarsha = %p\n", "Utkarsha");
    printf("String is %s\n", "Utkarsha");
    printf("String is %s\n", 2 * 10 % 17 + "Utkarsha");
    printf("Character = %c\n", str[2]);
    printf("Character = %c\n", "Utkarsha"[2]);
    return;
}

void strtokDemo() {
    char string[50] = "Hello! We are learning about strtok";
    // Extract the first token
    char * token = strtok(string, " ");
    // loop through the string to extract all other tokens
    while (token != NULL) {
        printf(" %s\n", token); //printing each token
        token = strtok(NULL, " ");
    }
    printf("\n");
    char string1[50] = "a string, of, ,tokens\0,after null terminator";

    /* the string pointed to by string is broken up into the tokens
       "a string", " of", " ", and "tokens" ; the null terminator (\0)
       is encountered and execution stops after the token "tokens"     */
    token = strtok(string1, ",");
    do {
        printf("token: %s\n", token);
    } while (token = strtok(NULL, ","));
    return;
}
