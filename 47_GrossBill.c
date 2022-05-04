/****************************************************************************
 *                                                                          *
 * File    : 47_GrossBill                                                     *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           27/04/2022  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

//Alternative - 1

int main(void)
{
	float productRate;   // product rate
	float grossBill;     // gross bill amount
	float netBill;      // net bill amount
	float discount;     //total discount
	float cashDiscount = 0.0f; // cash discount
	float qtyDiscount  = 0.0f; // quantity discount 
	int qtyPurchased;          // quantity purchased
	int paymentMode;           // made of payment

	const int CASH = 1;        // 1 represent CASH
	const float QTY_DISCOUNT_RATE = 0.05F;  // quantity discount of 5%
	const float CASH_DISCOUNT_RATE = 0.02F; // cash discount of 2%

	/*MInimum  quantity required to be purchased  to avail quantity discount*/
	const int MIN_PURCHASE_QTY = 100;

	printf("Please enter the quantity purchased (units) " );
	scanf("%i", &qtyPurchased);

    printf("Please enter the rate purchased : " );
	scanf("%f", &productRate);

	printf("What is the mode of payment ?\n"
		"Enter 1 for cash or 2 for other : ");
	scanf("i", &paymentMode);

	//Comput gross bill amount 
	grossBill = qtyPurchased * productRate;

	//compute quantity discount if qtypurchased > minimum purchase quantity

     if (qtyPurchased > MIN_PURCHASE_QTY)
	{
		qtyDiscount = grossBill * QTY_DISCOUNT_RATE;
	}

	//compute cash discount if the mode of payment is cash
	if (paymentMode == CASH)
    {
		cashDiscount = CASH_DISCOUNT_RATE * (grossBill - qtyDiscount);
	}

	//compute total discount 
	discount = qtyDiscount + cashDiscount;

	//compute net bill amount
	netBill = grossBill - discount;

	//print the result
	printf("Gross bill Amount is %.2f\n", grossBill);
	printf("Net bill amount is %.2f\n", netBill);


	return EXIT_SUCCESS;


}

