#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	// Dsiaply the Invoice Calculator Program Welcome
	cout << "Welcome to the Invoice Calculator Program version 2.0" << endl;

	// Get user input
	char customerType;
	cout << "Enter the customer type (r or w or c): ";
	cin >> customerType;

	// Validate user input
	while (customerType != 'r' && customerType != 'w' && customerType != 'c')
	{
		cout << "invalid entry" << endl;
		cout << "Enter the customer type (r or w or c): ";
		cin >> customerType;
	}

	// Get user input
	cout << "Enter subtotal" << endl;
	double subtotal;
	cin >> subtotal;

	// Validate user input
	while (subtotal < 0)
	{
		cout << "Invalid subtotal" << endl;
		cout << "Enter valid subtotal" << endl;
		cin >> subtotal;
	}

	// Calculate discount percent
	double discountPercent;

/*	
	if (tolower(customerType) == 'r')
	{
		if (subtotal < 100)
		{
			discountPercent = .0;
		}
		else if (subtotal >= 100 && subtotal < 250)
		{
			discountPercent = .1;
		}
		else (discountPercent = .2);
		{
		}
	}
	else if (tolower(customerType) == 'w')
	{
		if (subtotal < 500)
		{
			discountPercent = .4;
		}
		else (discountPercent = .5);
		{
		}
	}
	else (discountPercent = .0);
	{
	}
*/

	switch (customerType)
	{
		// Retail
		case 'r':
		case 'R':
			if (subtotal < 100)
			{
				discountPercent = .0;
			}
			else if (subtotal >= 100 && subtotal < 250)
			{
				discountPercent = .1;
			}
			else 
			{	
				discountPercent = .2;
			}
			break;

		// Wholesale
		case 'w':
		case 'W':
			if (subtotal < 500)
			{
				discountPercent = .4;
			}
			else 
			{	
				discountPercent = .5;
			}
			break;

		// College
		case 'c':
		case 'C':
			{
				discountPercent = .25;
			}
			break;

		// Other	
		default:
			{
				discountPercent = .0;
			}
			break;
	}

	// Calculate and round the reslts
	double discountAmount = subtotal * discountPercent;
	double total = subtotal - discountAmount;

	// display the results
	cout << "Discount percent is: "	<< discountPercent	<< endl;
	cout << "Discount amount is: "		<< discountAmount	<< endl;
	cout << "The total is: "            << total			<< endl;
	
	// Display the Invoice Calculator Program Goodbye
	cout << "Goodbye from the Invoice Calculator Program" << endl;

	return 0;
}