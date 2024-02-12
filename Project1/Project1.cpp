#include <iostream>
#include "travelexpense.h"
using namespace std;

int main()
{
	double mtd, mpg, gp;
	cout << "Enter the miles to drive";
	cin >> mtd;
	cout << "Enetr the miles per gallon ";
	cin >> mpg;
	cout << "Enter gas price ";
	cin >> gp;
	TravelExpense gust(mtd, mpg, gp);
	gust.CalculateExpense();
	cout << "The travel expense is " << gust.getExpense() << endl;
}

