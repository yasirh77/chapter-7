#include <iostream>
#include <iomanip>
#include <cmath>

/* Loan Problem*/

using namespace std; 
using std::ios; 
using std::setw;
using std::setprecision; 

double
length, interestRate, amountOfLoan, rate, interest, total, totalLoan, totalFee;

const float
feeA = 20, feeB = 25; 
int fee = 0; 


int main() {
	cout << "Length of time the loan will be out: \n";
	cin >> length;

	cout << "Interest Rate \n";
	cin >> interestRate;

	cout << "Amount of Loan";
	cin >> amountOfLoan;

	rate = interestRate / 100; 

	if
		(amountOfLoan >= 100 && amountOfLoan <= 100)
	{
		cout << "Amount of Loan: " << amountOfLoan << endl; 
	}

	else
	{
		cout << "INVAILD AMOUNT: Try between $100 - $100 \n";
	}

	if
		(interestRate >= 1 && <= 18)
	{
		cout << "Interest Rate is: " << interestRate << "%" << endl; 
	}

	if
		(amountOfLoan >= 100 && amountOfLoan <= 500)
	{
		fee = 20; 
	}
	else
	{
		fee = 25; 
	}

	interest = amountOfLoan * rate; 
	totalLoan = interest * length; 
	totalFee = totalLoan + fee; 

	cout << "The interest you will be paying every year: \n" << interest << endl;
	
	cout << "The total amount of interest you will be paying over the life of the loan: \n" << totalLoan << endl; 

	cout << "The total with interest and fee you will be paying: \n" << totalFee << endl; 

	return 0; 
}
