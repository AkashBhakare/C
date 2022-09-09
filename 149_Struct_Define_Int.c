/****************************************************************************
 *                                                                          *
 * File    : 149_Struct_Define_Int.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           01/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * Simple example demonstrating how to 
 * 1) Declare Structure type
 * 2) Access Structure Members
 * 3) Use of Direct and Indirect Selection operators
 */

#include<stdio.h>
#include<stdlib.h>
//Global Declaration of a Structure Type
struct STUDENT_DETAILS {
    int roll;
    char name[12];
    float per;
};

/*Anonymous Structure type*/
struct {
    float length;
    float height;
    float width;
} box1={10,12,5}, box2= {12,4.5}, *ptr_box; //One time declaration


typedef struct {
    float price;
    char name[10];
    char description[50];
    int id;
}Product;

int main(void) {
    struct STUDENT_DETAILS sam;
    printf("Roll No : %d\tName : %s\tPercentage : %.2f\n",sam.roll, sam.name, sam.per);
    
    struct STUDENT_DETAILS tom = {12, "Tanmay", 77.89F};
    printf("Roll No : %d\tName : %s\tPercentage : %.2f\n",tom.roll, tom.name, tom.per);

    /*It's necessary to maintain the order while initializing the members of Structure */
    struct STUDENT_DETAILS jui = {"Jui", 77.89F, 14};
    printf("Roll No : %d\tName : %s\tPercentage : %.2f\n",jui.roll, jui.name, jui.per);
    
    typedef struct STUDENT_DETAILS Student;
    Student raju = {4, "Raju", 87.89F };
    printf("Roll No : %d\tName : %s\tPercentage : %.2f\n",raju.roll, raju.name, raju.per);
    
    printf("Box1 :\tLength = %7.2f\tHeight = %7.2f\tWidth = %7.2f\n",
                    box1.length, box1.height, box1.width);
    
    /*If any member is initialized then rest of the members are set to zero*/
    printf("Box2 :\tLength = %7.2f\tHeight = %7.2f\tWidth = %7.2f\n",
                    box2.length, box2.height, box2.width);
    
    /*Pointer to Box can store address of any Box
     Indirect Selection using Pointer (->)
     */
    ptr_box = &box1;
    printf("Box1 :\tLength = %7.2f\tHeight = %7.2f\tWidth = %7.2f\n",
                    ptr_box->length, ptr_box->height, ptr_box->width);
    
    /*Direct Selection using Pointer(.) */
    printf("Box1 :\tLength = %7.2f\tHeight = %7.2f\tWidth = %7.2f\n",
                    (*ptr_box).length,  (*ptr_box).height,  (*ptr_box).width);
    
    Product pen = {350.5F,"Ball Pen","For official purpose", 1002};
    printf("Name = %s\tID = %d\tPrice = %.2f\tDescription = %s\n",
                    pen.name,pen.id, pen.price, pen.description);
    return 0;
}
