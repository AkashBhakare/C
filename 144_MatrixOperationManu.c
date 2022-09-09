/****************************************************************************
 *                                                                          *
 * File    : 144_MatrixOperationManu.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 * IT2.c (With Menu)
 *
 *Represent matrix using two dimensional
 *arrays and perform following operations:
 * 1) Addition using pointers
 * 2) multiplication without pointers
 * 3) transpose using pointers
 *
 *  Created on: 02-Aug-2013  
 *      Author: Hrishi
 */

#include "stdio.h"
#include "stdlib.h"

#define MAX 3

void acceptMatrix(int[][MAX]);
void displayMatrix(int matrix[][MAX]);
void addMatrix(int (*)[MAX], int (*)[MAX]);
void multiplyMatrix(int m1[][MAX], int m2[][MAX]);
void subtractMatrix(int m1[][MAX], int m2[][MAX]);
void initializeMatrix(int (*)[MAX]);
void transposeMatrix(int (*)[MAX]);
int getMenuChoice();

int main(void) {
    int mat1[MAX][MAX]; // input matrix
    int mat2[MAX][MAX]; // input matrix
    int choice;
    do {
        choice = getMenuChoice();
        switch (choice) {
            case 1:
                printf("Please enter the values for the "\
                        "First matrix : \n");
                acceptMatrix(mat1);
                break;
            case 2:
                printf("Please enter the values for the "\
                        "second matrix : \n");
                acceptMatrix(mat2);
                break;
            case 3:
                printf("Matrix 1\n");
                displayMatrix(mat1);
                break;
            case 4:
                printf("Matrix 2\n");
                displayMatrix(mat2);
                break;
            case 5:
                //add two matrices
                addMatrix(mat1, mat2);
                break;
            case 6:
                //multiply two matrices
                multiplyMatrix(mat1, mat2);
                break;
            case 7:
                subtractMatrix(mat1,mat2);
                break;
            case 8:
                //transpose of first matrix
                transposeMatrix(mat1);
                break;
            case 9:
                //transpose of first matrix
                transposeMatrix(mat2);
                break;
            case 10:
                printf("finished with the operations!\n");
                break;
        } //end of switch case
    } while (choice != 10); //end of loop
    return EXIT_SUCCESS;
}

int getMenuChoice() {
    int choice;
    printf("\n***** Matrix Operations *****\n");
    printf("1) Accept Matrix 1\n");
    printf("2) Accept Matrix 2\n");
    printf("3) Display Matrix 1\n");
    printf("4) Display Matrix 2\n");
    printf("5) Add two Matrices\n");
    printf("6) Multiply Two Matrices\n");
    printf("7) Subtract Second Matrix from First\n");
    printf("8) Transpose of Matrix 1\n");
    printf("9) Transpose of Matrix 2\n");
    printf("10) Exit\n");
    printf("\nPlease enter your choice (1/2/3/4/5/6/7/8/9):");
    scanf("%d", &choice);
    return choice;
}

void acceptMatrix(int m[][MAX]) {
    size_t i; //row subscript
    size_t j; //column subscript
    for (i = 0; i < MAX; i++) {
        printf("\n\tRow No : %zu\n", (i + 1));
        for (j = 0; j < MAX; j++) {
            printf("\tCOLUMN No : %zu : ", (j + 1));
            fflush(stdout);
            scanf("%d", &m[i][j]);
        }
    }
    return;
}

void displayMatrix(int m[MAX][MAX]) {
    size_t i;
    size_t j;
    for (i = 0; i < MAX; i++) {
        printf("\n");
        for (j = 0; j < MAX; j++) {
            printf("%5d", m[i][j]);
        }
    }
    printf("\n");
    return;
}

void addMatrix(int (*mat1)[MAX], int (*mat2)[MAX]) {
    int addition[MAX][MAX];
    size_t i; //Row subscript
    size_t j; //column subscript
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            *(*(addition + i) + j) = *(*(mat1 + i) + j) + *(*(mat2 + i) + j);
        }
    }
    printf("\nAddition is as follows\n");
    displayMatrix(addition);
    return;
}

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX]) {
    size_t i; //row subscript
    size_t j; //column subscript
    size_t k; //Row:mat1 & col:mat2
    int multi[MAX][MAX];

    initializeMatrix(multi); //important

    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            for (k = 0; k < MAX; k++) {
                multi[i][j] = multi[i][j] + 
                                (mat1[i][k] * mat2[k][j]);
            }// k for
        } // j for
    } // i for
    printf("\nMultiplication is as follows\n");
    displayMatrix(multi);
    return;
}

void subtractMatrix(int m1[][MAX], int m2[][MAX]){
    size_t i; //row subscript
    size_t j; //column subscript
    size_t k; //Row:mat1 & col:mat2
    int sub[MAX][MAX];
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
                sub[i][j] = m1[i][j] - m2[i][j];
            
        }
    }
    printf("\nSubtraction is as follows\n");
    displayMatrix(sub);
    
}

void initializeMatrix(int m[MAX][MAX]) {
    size_t i;
    size_t j;
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            m[i][j] = 0;
        }
    }
    return;
}

void transposeMatrix(int (*mat)[MAX]) {
    size_t i; //Row subscript
    size_t j; //column subscript
    int trans[MAX][MAX];
    for (i = 0; i < MAX; i++) {
        for (j = 0; j < MAX; j++) {
            trans[j][i] = mat[i][j];
        }
    }
    printf("\nTranspose is as follows\n");
    displayMatrix(trans);
    return;
}



