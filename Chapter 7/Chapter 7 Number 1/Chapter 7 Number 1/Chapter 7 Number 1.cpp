#include <isostream>
#include <iomanip>
#include <cmath>


/*Numerator Problem*/

using namespace std::
using std::ios; 
using std::cout;
using std::cin; 
using std::endl; 

int
numerator, denominator, remainder, num1; 

int main() {

	cout << "Enter Numerator: \n";
	cin >> numerator; 

	cout << "Enter Denominator: \n"; 
	cin >> denominator; 

	remainder = numerator % denominator; 
	num1 = (numerator - remainder) / denominator; 
	
	if (denominator == 0)
	{
		cout << "THIS IS AN ERROR: Imagine you have zero cookies and you spilt them evenly among zero friends. See it doesn't make sense and you are sad that you have no friends." << endl;

	}

	else if (numerator > denominator)
	{
		cout << "This is a mixed fraction" << num1 << " " << remainder << "/" << denominator << endl;
	}

	else if (numerator < denominator)
	{
		cout << "Numerator: " << numerator << "/  Denominator" << denominator;
	}

	else if
		(numerator == denominator)
	{
		cout << "Numerator/ Denominator is equal to 1";
	}

	return 0; 
}
