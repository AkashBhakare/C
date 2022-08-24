/****************************************************************************
 *                                                                          *
 * File    : 133_Arrintsearchsort.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           10/08/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
/*
 Single dimensional integer array example
 Methods of passing single dimensional array to a function
 Sorting
    selection sort
    bubble sort
    insertion sort
 Searching
    Linear Search
    Improved linear search
 */

#include<stdio.h>
#include<stdlib.h>

#define SIZE 10
//void qsort( void *ptr, size_t count, size_t size,
//            int (*comp)(const void *, const void *) );

int compare(const void *, const void *);
void accept(int a[SIZE], size_t arraySize); //using alias
void display1(const int *, size_t arraySize); //using pointer to constant integer
void display2(int * const ptr, size_t arraySize); //using constant pointer
void selectionSort(int[ ], size_t arraySize); //using alias
int linearSearch(int unsortedArray[], int valueSearched,size_t arraySize); //using alias
int linearSearchImproved(int sortedArray[], int valueSearched, size_t arraySize); //using alias
void bubbleSort(int[SIZE], size_t arraySize);

int main() {
    int array[SIZE];
    int valueSearched;
    int pos;
    printf("Address of array = %p\n", array);
    accept(array, SIZE);
    printf("The original contents of the array are:\n");
    display1(array, SIZE);
//    display2(array, SIZE);
    printf("Please enter the integer to be searched:");
    scanf("%i", &valueSearched);
    pos = linearSearch(array, valueSearched, SIZE);
    if (pos != 0 ) {
        printf("Value is found at position no %d\n", pos);
    } else {
        fprintf(stderr,"Value %d is not present in the array\n", valueSearched);
        fflush(stderr);
    }
    
    /*Sort using library function*/
    /*Arguments :   array_name, 
                    number of elements in the array
                    size of each element in the array
                    Comparator : Function specifying how to compare two values*/
    qsort( array, sizeof(array)/sizeof(array[0]), sizeof(array[0]), compare);
    printf("After applying Quick sort on Array\n");
    display1(array, SIZE);
    
//    selectionSort(array, SIZE);
//    printf("The Sorted contents of the array are :\n");
//    display(array,SIZE);
//    printf("Please enter the integer to be searched:");
//    scanf("%d", &valueSearched);
//    pos = linearSearchImproved(array, valueSearched, SIZE);
//    if (pos) {
//        printf("Value is found at position %d\n", pos);
//    } else {
//        printf("Value %d is not present\n", valueSearched);
//    }

    return EXIT_SUCCESS;
}

void accept(int a[SIZE], size_t arraySize) {
    int i;
    printf("Address of a = %p\n",a);
    printf("Please enter %zu integer values \n", arraySize);
    for (i = 0; i < arraySize; i++) {
        printf("Please enter value no %d: ", (i + 1));
       //scanf("%d", &a[ i ]);
        scanf("%i", a + i);
    }
    return;
}

//const int * ptr : non-constant pointer storing address of constant integer
void display1(const int * ptr, size_t arraySize) {
    int i;
    printf("The contents of the array are :\n");
    for (i = 0; i < arraySize; i++) {
        printf("%5d", *ptr);
        ptr++;
    }
    printf("\n");
    return;
}


// int * const ptr' : constant pointer storing address of non-constant integer
void display2(int * const ptr, size_t size) {
    int i;
    printf("The contents of the array are :\n");
    for (i = 0; i < size; i++)
    {
        printf("%5d", *(ptr + i));
        //ptr++;
    }
    printf("\n");
    return;
}
 

// linear search ( on unsorted elements)
//usage : pos = linerSearch(array, valueToSearch, array_size);
//Returns : Position if the element is found otherwise 0
int linearSearch(int a[], int target, size_t arraySize) {
   
    for (size_t idx = 0; idx < arraySize; idx++) {
        if (a[idx] == target) {
            //return position if element is found    
            return ( idx + 1);
        }
    }
    //return 0 if the element is not found
    return 0;
}

int compare(const void * ptr1, const void *ptr2){
    int number1 = *((const int*)ptr1);
    int number2 = *((const int*)ptr2);
    
    if(number1 == number2)
        return 0;
 
    if(number1 > number2)
        return 1;
    
    return -1; // when number1 < number2
}


// improved linear search
// can be applied only for sorted list
//usage : pos = linearSearchImproved(array, valueToSearch, array_size);
//Returns : Position if the element is found otherwise 0
int linearSearchImproved(int a[], int target, size_t arraySize) {
    size_t cnt;
    //Proceed to search only if the target is not greater than 
    //last element
    if (target <= a[arraySize - 1]) {
        for (cnt = 0; cnt < arraySize; cnt++) {
            if (a[cnt] == target) {
                //return position if element is found
                return ( cnt + 1);
            } else {
                if (a[cnt] > target) {
                    /* terminate the loop if an element larger 
                     * than the one that is searched for is found
                     */
                    break;
                }
            }
        } //end of for loop
    }//end of if

    //return 0 if the element is not found
    return 0;
}

//bubble sort

void bubbleSort(int a[],size_t arraySize) {
    size_t j;
    size_t i;
    int temp;
    //  loop for controlling total number of passes
    for (i = 1; i < arraySize; i++) {
        //   loop for controlling number of 
        //   comparisons during each pass   
        for (j = 0; j < (arraySize - i); j++) {
            if (a[ j ] > a[ j + 1 ]) {
                // swap elements at (j)th and 
                // (j+1)th position
                temp = a[ j ];
                a[ j ] = a[ j + 1 ];
                a[ j + 1 ] = temp;
            }
        }//end of inner j loop
        //display(a); //to display every pass
    } //end of outer i loop
    return;
}


//selection sort

void selectionSort(int arr[], size_t arraySize) {
    size_t i;
    size_t j;
    int temp;
    for (i = 0; i < arraySize - 1; i++) {
        for (j = (i + 1); j < arraySize; j++) {
            if (arr[ i ] > arr [ j ]) {
                //swap element at ith and jth position
                temp = arr[ i ];
                arr[ i ] = arr[ j ];
                arr[ j ] = temp;
            } //end if
        } //end of j - for loop
    } // end of i - for loop
    return;
}


//Insertion sort

void insertionSort(int arr[],size_t arraySize) {
    size_t i;
    size_t j;
    size_t k;
    int temp;
    for (i = 1; i < arraySize; i++) {
        for (j = 0; j < i; j++) {
            if (arr[ i ] > arr[ j ]) {
                temp = arr[ i ];
                k = i;
                while (k > j) //shifting elements
                {
                    arr[ k ] = arr[ k - 1 ];
                    k--;
                } //end while
                arr[j] = temp;
                break;
            } //end if
        } //end of j for loop
    } //end of i for loop
    return;
}
