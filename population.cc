#include <iostream>
#include <cmath>

using namespace std;


int main()
{
	int year = 1;
	double townA, townB;
	double growthA, growthB;

	//get the information of the first town
	cout << "Enter the population of the first town: ";
	cin >> townA;
	cout << "Enter the growth of the first town%: ";
	cin >> growthA;
	cout << endl;

	//get the information of the second town
	cout << "Enter the population of the second town: ";
	cin >> townB;
	cout << "Enter the growth of the second town%: ";
	cin >> growthB;
	cout << endl;

	while (townA < townB)
	{
		townA = (growthA / 100) * townA + townA;
		townB = (growthB / 100) * townB + townB;
		year++;
	}

	cout << "This is the population of the first town after " << year << " years: " << townA << endl;
	cout << "This is the population of the second town after " << year << " years: " << townB;

	return 0;
}