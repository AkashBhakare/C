/****************************************************************************
 *                                                                          *
 * File    : 155_Enum.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           07/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
// Enumeration
#include<stdio.h>
#include<stdlib.h>

/* Globally declared enum type */
enum METRO_STD {
    DELHI = 11,
    MUMBAI = 22,
    KOLKATTA = 33,
    CHENNAI
} cityCode;
//cityCode is defined as a global variable of enum type

typedef enum METRO_STD METRO_STD;

void foo(void);
void baz(void);

int main(void) {
    // local variable of user-defined enumeration metro
    enum METRO_STD town = MUMBAI;
    printf("Town in main() is %d\n", town);
 // printf("MAX in main() = %d",MAX);

#define MAX 44
    printf("MAX in main() = %d\n", MAX);

    METRO_STD myOffice; //without keyword enum
    printf("Size of METRO = %u bytes\n", sizeof (METRO_STD));
    cityCode = DELHI;
    printf("\n\t\t\tcity %d\n", cityCode);

    cityCode = MUMBAI;
    printf("\n\t\t\tcity %d\n", cityCode);
    //    STATEMENT
//    cityCode = NASIK; //error

    cityCode = 111; //Syntactically okay
    printf("\n\t\t\tcity %d\n", cityCode);
    baz();
    foo();
    
    return 0;
}

void baz() {
    //Type declaration is local to the function
    enum PINCODE {
        AKURDI = 411035,
        NIGDI = 411044,
        PIMPRI = 411018
    };
    enum PINCODE myTown;
    printf("MAX in baz() = %d\n", MAX);
    myTown = AKURDI;
    printf("Mytown Pincode = %d\n",myTown);
    
}

void foo() {
    enum METRO_STD city = CHENNAI;
    printf("MAX in foo() = %d\n", MAX);
    printf("Town in foo() is %d\n",city);
 //   enum PINCODE yourTown;
 //     printf("Town in main() is %d\n", town);
    return;
}
