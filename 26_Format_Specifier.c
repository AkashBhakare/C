/****************************************************************************
 *                                                                          *
 * File    :26_Format_Specifier                                                        *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           03/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/



#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int x_cord;
    int y_cord;
    int count;
    printf("Enter x & y co-ordinate of a point in X_Y plane : ");
    count = scanf("%d,%d",&x_cord, &y_cord);
    printf("Number of successful extractions : %d\n",count);
    printf("The Point is[%d,%d]\n",x_cord,y_cord);   
    return 0;
}


