/****************************************************************************
 *                                                                          *
 * File    : 143_MatrixOperations.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           24/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* Accept values for two square matrices of 
 * the order 3 and display Matrix Addition 
 * and Multiplication of these 2 matrices */

#include<stdio.h>
#include<stdlib.h>

#define MAX 3

void acceptMatrix(int [][MAX]);
void displayMatrix(int matrix[][MAX]);
void addMatrix(int m1[][MAX], int m2[][MAX], int res[][MAX]);
void multiplyMatrix(int m1[][MAX], int m2[][MAX], int res[][MAX]);
void initialize(int (*)[MAX]);

int main(void)
{
    int mat1[MAX][MAX]; // input matrix
    int mat2[MAX][MAX]; // input matrix
    int addition[MAX][MAX]; // Addition
    int multi[MAX][MAX] = {{0}}; // multiplication

    printf("Please enter the values for the "\
	"first matrix : \n");
    acceptMatrix(mat1);

    printf("Please enter the values for the "\
	"second matrix : \n");
    acceptMatrix(mat2);
    
    addMatrix(mat1, mat2, addition);
    multiplyMatrix(mat1, mat2, multi);
    printf("Matrix 1 \n");
    displayMatrix(mat1);
    printf("Matrix 2 \n");
    displayMatrix(mat2);
    printf("Addition of two Matrices \n");
    displayMatrix(addition);
    printf("Multiplication of two Matrices \n");
    displayMatrix(multi);
    return EXIT_SUCCESS;
}

void acceptMatrix(int m[][MAX])
{
    int i; //row subscript
    int j; //column subscript
    for (i = 0; i < MAX; i++)
    {
        printf("\tRow No : %d\n", (i + 1));
        for (j = 0; j < MAX; j++)
        {
            printf("\tCOLUMN No : %d : ", (j + 1));
            scanf("%d", &m[ i ][ j ]);
        }
    }
    printf("\n");
    return;
}

void displayMatrix(int m[MAX][MAX])
{
    int i;
    int j;
    for (i = 0; i < MAX; i++)
    {
        printf("\n");
        for (j = 0; j < MAX; j++)
        {
            printf("%5d", m[i][j]);
        }
    }
    printf("\n");

    return;
}

void addMatrix(int mat1[][MAX], int mat2[][MAX],
               int addition[][MAX])
{
    int i; //Row subscript
    int j; //column subscript
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            addition[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
    return;
}

void multiplyMatrix(int mat1[][MAX], int mat2[][MAX],
                    int multi[][MAX])
{
    int i; //row subscript
    int j; //column subscript
    int k; //Row:mat1 & col:mat2

    initialize(multi); //important

    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            for (k = 0; k < MAX; k++)
            {
                multi[i][j] = multi[i][j] +
                        (mat1[i][k] * mat2[k][j]);
            } //end of k loop
        } //end of j loop
    } //end of i loop
    return;
}

void initialize(int (*m)[MAX])
{
    int i;
    int j;
    for (i = 0; i < MAX; i++)
    {
        for (j = 0; j < MAX; j++)
        {
            *(*(m+i)+j) = 0;
        }
    }
    return;
}


