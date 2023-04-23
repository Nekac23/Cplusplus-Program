#include <iostream>
#include <iomanip>
//Antoinique Curry
using namespace std;

int main()
{
	//Declare variables to store
	float investAmt, monDepos, AnuInter, months, years;
	//Store year end total amount, interest, and year end interest
	float totalAm, intAmt, yearTotInt;


	//Display info to user
	cout << "******** User Data Option ********\n";
	cout << "Investment Amount: \n";
	cout << "Monthly Deposit: \n";
	cout << "Annual Interest Rate: \n";
	cout << "Number of years: \n";

	//Stop for user input
	system("STOP");

	//Getting data from the user
	cout << "******** User Data Option ********\n";
	cout << "Investment Amount: $";
	cin >> investAmt;
	cout << "Monthly Deposit: $";
	cin >> monDepos;
	cout << "Annual Interest Rate: %";
	cin >> AnuInter;
	cout << "Number of years: ";
	cin >> years;
	months = years * 12;

	//Stop for user input
	system("STOP");

	//Set total amount for inital investment
	totalAm = investAmt;

	//Display year data without monthly deposits
	cout << "\nBalance and Interest Without Additional Monthly Deposits\n";
	cout << "******************************\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "*************************************\n";


	for (int i = 0; i < years; i++) {

		//Calculate yearly interest
		intAmt = (totalAm) * ((AnuInter / 100));

		//Calculate year end total
		totalAm = totalAm + intAmt;

		//Print results only showing two decimal points
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << intAmt << "\n";

	}

	//Set total amount for investment
	totalAm = investAmt;

	//Display year data with monthly deposits
	cout << "\n\nBalance and Interest With Additional Monthly Deposits\n";
	cout << "*******************************\n";
	cout << "Year\t\tYear End Balance\tYear End Earned Interest\n";
	cout << "**************************************\n";

	for (int i = 0; i < years; i++) {

		//Set yearly interest to zero at the start of the year
		yearTotInt = 0;

		for (int j = 0; j < 12; j++) {

			//Calculate monthly interest
			intAmt = (totalAm + monDepos) * ((AnuInter / 100) / 12);

			//Calculate month end interest
			yearTotInt = yearTotInt + intAmt;

			//Calculate month end total
			totalAm = totalAm + monDepos + intAmt;

		}

		//Print results only showing two decimal points
		cout << (i + 1) << "\t\t$" << fixed << setprecision(2) << totalAm << "\t\t\t$" << yearTotInt << "\n";


	}

	return 0;
}