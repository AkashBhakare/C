/****************************************************************************
 *                                                                          *
 * File    :82_Printing_Pattern                                                      *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/06/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

/* Accept integer n and display 'n' rows from the following series 
 i/p : 4
 o/p :  4 4 4 4
        4 4 4 4
        4 4 4 4 
        4 4 4 4
 
#include <stdio.h>

int
main ()
{
  int total_rows;
  printf ("Enter any integer :");
  scanf ("%i", &total_rows);
  for (int row = 1; row <= total_rows; ++row)
  {
    for (int col = 1; col <= total_rows; ++col)
	{
	  printf (" %d", total_rows);
	}
	printf("\n");
  }

  return 0;
}
 */

/*
Accept integer n and display n rows from following series

n = 4

    1
    1 2 
    1 2 3
    1 2 3 4
    
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_rows;
    printf("Please enter the number of rows to print :");
    scanf("%i", &total_rows);
    for (int row = 1; row <= total_rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}



/*
Accept integer n and display n rows from following series

n = 4
   
    4 
    4 3
    4 3 2 
    4 3 2 1
    


#include <stdio.h>
#include <stdlib.h>

int
main() {
    int total_rows;
    printf("Please enter the number of rows to print :");
    scanf("%i", &total_rows);
    for (int row = total_rows; row >= 1; --row) {
        for (int col = total_rows; col >= row; --col) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
 */

/*
Accept integer n and display n rows from following series

n = 4

    4 3 2 1 
    4 3 2
    4 3  
    4  
    


#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_row;

    printf("Please Enter a integer :");
    scanf("%i", &total_row);
    for (int row = 1; row <= total_row; ++row) {
        for (int col = total_row; col >= row; col--) {
            printf("%d ", col);
        }
        printf("\n");
    }
}
 */


/*
Accept integer n and display n rows from following series

n = 4

   4 :  1 2 3 4 
   3 :  1 2 3
   2 :  1 2
   1 :  1
    
 
#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_rows;
    printf("Please enter the number of rows to print :");
    scanf("%i", &total_rows);
    for (int row = total_rows; row >= 1; --row) {
        for (int col = 1; col <= row; ++col) {
            printf("%d ", col);
        }
        printf("\n");
    }
    return EXIT_SUCCESS;
}
 */


/*

 *
 *   *
 *   *   *
 *   *   *   *
 
 */
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_rows;

    printf("Please enter a integer :");
    scanf("%i", &total_rows);

    for (int row = 1; row <= total_rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}
 */

/*
 *
 * * *
 * * * * *
 * * * * * * *
 */

//#include <stdio.h>
//
//int main() {
//    int total_row;
//    printf("Enter the total number of rows:");
//    scanf("%i", &total_row);
//    total_row = total_row * 2;
//    for (int row = 1; row <= total_row; row = row + 2) {
//        for (int col = 1; col <= row; ++col) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}

//Alternative Way

//#include <stdio.h>
//int main() {
//    int total_row;
//    printf("Enter the total number of rows:");
//    scanf("%i", &total_row);
//   
//    for (int row = 1; row <= total_row; ++row) {
//        for (int col = 1; col <= (2*row)-1; ++col) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


/*
 * * * *
 *     *
 *     *
 * * * *
 */
/* 
#include <stdio.h>

int main()
{
    int total_row;
    printf("Enter the total number of rows:");
    scanf("%i",&total_row);
    for(int row=1;row<=total_row;++row)
    {
        for(int col=1;col<=total_row;++col)
        {
            if(row==1 || row==total_row || col==1 || col==total_row)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
    return 0;
}
 */

//alternative way


//#include <stdio.h>
//
//void print_first_last_row(int total_rows);
//void print_internal_rows(int total_rows);
//
//int main() {
//    int total_row;
//    printf("Enter the total number of rows:");
//    scanf("%i", &total_row);
//
//    print_first_last_row(total_row);
//    print_internal_rows(total_row);
//    print_first_last_row(total_row);
//
//    return 0;
//}
//
//void print_first_last_row(int total_row) {
//    //last rows
//    for (int row = 1; row <= total_row; ++row) {
//        printf("* ");
//    }
//    printf("\n");
//}
//
//void print_internal_rows(int total_row) {
//    /*Print rows except the first and the last row*/
//    for (int row = 1; row <= total_row - 2; ++row) {
//        printf("* "); //first * on every internal row
//
//        /*Prints spaces on internal rows*/
//        for (int col = 1; col <= total_row - 2; ++col) {
//            printf("  ");
//        }
//
//        printf("* "); //Last * on every internal row
//        printf("\n");
//    }
//}
//

//1
//2 3
//4 5 6
//7 8 9 10

/*

#include <stdio.h>

int main() {
    int total_rows;
    int counter = 1;
    printf("Enter the number of rows: ");
    scanf("%i", &total_rows);
    for (int row = 1; row <= total_rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            printf("%-4d", counter);
            ++counter;
        }
        printf("\n");
    }
    return 0;
}
 */

/*
 
 1
 1 0
 1 0 1
 1 0 1 0
 1 0 1 0 1
  
 */

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int total_rows;
//
//    printf("Please enter a total Number of rows :");
//    scanf("%i", &total_rows);
//
//    for (int row = 1; row <= total_rows; ++row) {
//        for (int col = 1; col <= row; ++col) {
//            printf("%2d", col % 2);
//        }
//        printf("\n");
//    }
//    return 0;
//}

/*

 1
 0 0
 1 1 1
 0 0 0 0 
 
 */
/*
#include <stdio.h>
#include <stdlib.h>

int main() {
    int total_rows;

    printf("Please enter a total Number of rows :");
    scanf("%i", &total_rows);

    for (int row = 1; row <= total_rows; ++row) {
        for (int col = 1; col <= row; ++col) {
            printf("%2d", row % 2);
        }
        printf("\n");
    }
    return 0;
}
 */

/*
    1
    0 1
    1 0 1
    0 1 0 1
 */

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int total_rows;
//    int temp;
//    printf("Please enter a total Number of rows :");
//    scanf("%i", &total_rows);
//
//    for (int row = 1; row <= total_rows; ++row) {
//        if (row % 2 == 0) {
//            temp = 0;
//        } else {
//            temp = 1;
//        }
//        for (int col = 1; col <= row; ++col) {
//            printf("%2d", temp % 2);
//            temp++;
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main() {
//    int total_rows;
//    int temp;
//    printf("Please enter a total Number of rows :");
//    scanf("%i", &total_rows);
//
//    for (int row = 1; row <= total_rows; ++row) {
//        temp = row % 2;
//            
//        for (int col = 1; col <= row; ++col) {
//            printf("%2d", temp % 2);
//            temp++;
//        }
//        printf("\n");
//    }
//    return 0;
//}

//#include <stdio.h>
//#include <stdlib.h>
//
//int main() {
//    int total_rows;
//    printf("Please enter a total Number of rows :");
//    scanf("%i", &total_rows);
//
//    for (int row = 1; row <= total_rows; ++row) {
//       for (int col = 1; col <= row; ++col) {
//            printf("%2d", (row+col+1) % 2);
//        }
//        printf("\n");
//    }
//    return 0;
//}


/*

    * 
   * * 
  * * * 
 * * * * 
* * * * *

 */

//#include <stdio.h>
//#include <stdlib.h>

//int main() {
//    int total_rows;
//
//    printf("Please enter the number of rows:");
//    scanf("%i", &total_rows);
//
//    for (int row = 1; row <= total_rows; row++) {
//        /*Print space at the begining of every row*/
//        for (int space = 1; space <= (total_rows - row); space++) {
//            printf(" ");
//        }
//        /*Print space on every row*/
//        for (int col = 1; col <= row; col++) {
//            printf("* ");
//        }
//        printf("\n");
//    }
//    return 0;
//}


