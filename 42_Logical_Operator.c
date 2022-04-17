/****************************************************************************
 *                                                                          *
 * File    : 42_Logical_Operator                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           16/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

//LOGICAL  NOT(!)
int main(){
	int age;
	bool is_eligible_to_vote;
    const int MIN_AGE_YRS_FOR_VOTING = 18;

	age = 45;
    is_eligible_to_vote = (age >= MIN_AGE_YRS_FOR_VOTING);
    printf("Is Person with age %d yrs eligible to vote ? %d\n",age, is_eligible_to_vote);

    age = 15;
    is_eligible_to_vote = (age >= MIN_AGE_YRS_FOR_VOTING);
    printf("Is Person with age %d yrs eligible to vote ? %d\n",age, is_eligible_to_vote);


    age = 45;
    is_eligible_to_vote = !(age >= MIN_AGE_YRS_FOR_VOTING);
    printf("Is Person with age %d yrs eligible to vote ? %d\n",age, is_eligible_to_vote);
    
	age = 15;
    is_eligible_to_vote = !(age >= MIN_AGE_YRS_FOR_VOTING);
    printf("Is Person with age %d yrs eligible to vote ? %d\n",age, is_eligible_to_vote);
  
	return 0;
}
/*

// LOGICAL OR(||)
int main(){
	int age;
	const int MAX_AGE_LIMIT_FOR_KID = 12;
	const int MIN_AGE_LIMIT_SR_CITIZEN = 60;


	printf("Please Enter Your age in Year : ");
	scanf("%i", &age);
	if((age < MAX_AGE_LIMIT_FOR_KID) || (age >= MIN_AGE_LIMIT_SR_CITIZEN)){
		printf("You are eligible for concession\n");
	}else {
		printf("You are not eligible for concession\n");
	}
	return 0;

}
*/


/*
int main()
{
	int age;
	//_Bool is_eligible_for_discount;

	bool is_eligible_for_discount = false;
	age = 45;
	is_eligible_for_discount = (age < 12) || (age >= 60);
	printf("Person with age %d year is eligible for discount during travel ? %d\n",\
		age, is_eligible_for_discount);
	
	age = 65;
    is_eligible_for_discount = (age < 12) || (age >= 60);
	printf("Person with age %d year is eligible for discount during travel ? %d\n",\
		age, is_eligible_for_discount);
}
*/

/* 
// Chacking vote...

int main()
{
	int age;
	const int MIN_AGE_YRS = 18;
	const int MAX_AGE_YRS = 60;

	printf("Please enter your age in years : ");
	scanf("%i", &age);

	if(age >= MIN_AGE_YRS && age <= MAX_AGE_YRS){
		printf("You are eligible to apply for the job\n");
    }else {
		printf("You are not eligible to apply for the job\n");
	}
    return 0;
} 

*/

/*
// LOGICAL AND(&&)
int main()
{
    int age = 25;
	bool is_eligible_to_work;

	is_eligible_to_work = age >= 18;
	printf("Is Person with age %d years eligible to work ? %d\n",age, is_eligible_to_work);

	age = 100;
	is_eligible_to_work = age >= 18;
    printf("Is Person with age %d years eligible to work ? %d\n",age, is_eligible_to_work);
    
	age = 25;
	is_eligible_to_work = (age >= 18) && (age <= 60);
	printf("Is Person with age %d years eligible to work ? %d\n",age, is_eligible_to_work);
    
	age = 100;
	is_eligible_to_work = (age >= 18) && (age <= 60);
	printf("Is Person with age %d years eligible to work ? %d\n",age, is_eligible_to_work);
	return 0;
}
*/

