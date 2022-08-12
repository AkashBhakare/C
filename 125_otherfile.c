/****************************************************************************
 *                                                                          *
 * File    : 125_otherfile.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           29/07/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>

extern int var1; //declaration of Global variable
//extern int var2;
int displayValues()
{
    printf("External Linkage Var1 (OtherFile): %d\n",var1);
   
//    printf("Internal Linkage Var1 (OtherFile): %d\n",var2);
}

