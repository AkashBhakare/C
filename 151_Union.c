/****************************************************************************
 *                                                                          *
 * File    : 151_Union.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           06/09/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/
// nesting of structures and unions
// stores details of person along with his personal
// or academic information

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Personal_details
{
    int age;
    float weight;
    char address[100];
};
typedef struct Personal_details PERSONAL_TYPE;

struct Academic_details
{
    float score;
    int yr_of_passing;
    char last_deg[100];
};
typedef struct Academic_details ACADEMIC_TYPE;

/*
 *  following declaration will result in wastage of 
 *  memory since we planned to store either the 
 *  personal or academic details
 */
/*
struct Person
{
    char name[20];
    PERSONAL_TYPE pd;
    ACADEMIC_TYPE ad;
};
struct Person p; //global
*/

/*
 * Following declaration ensures that Personal 
 * and Academic Details are mutually exclusive
 */
union Details
{
    PERSONAL_TYPE pd;
    ACADEMIC_TYPE ad;
};
typedef union Details DETAILS;

// A Structure that holds Persons name and
// either stores Personal or Academic details
// of a Person
struct Person
{
    char name[20];
    int info_type;
    DETAILS detail;
};

typedef struct Person PERSON;
struct Person p; //global variable

#define PERSONAL_DET 1
#define ACADEMIC_DET 2

int main()
{
    PERSON p1; //local variable
    printf("Size of p1 = %u\n", sizeof (p1));

    //	p1.name = "anil";
    p1.info_type = ACADEMIC_DET; //1 :Pd & 2 :AD
    strcpy(p1.name, "anil");
    strcpy(p1.detail.ad.last_deg, "Master in computer Science");
    p1.detail.ad.yr_of_passing = 2003;
    p1.detail.ad.score = 78.89f;

    printf("\nName : %s\n", p1.name);
    if (p1.info_type == PERSONAL_DET)
    {
        printf("Age : %d\n", p1.detail.pd.age);
        printf("Weight %.2f", p1.detail.pd.weight);
        printf("Name : %s\n", p1.detail.pd.address);
    }
    else
    {
        printf("Degree : %s\n", p1.detail.ad.last_deg);
        printf("Year of Passing :%d\n", p1.detail.ad.yr_of_passing);
        printf("Score : %.2f%%\n", p1.detail.ad.score);
    }
    return (EXIT_SUCCESS);
}
