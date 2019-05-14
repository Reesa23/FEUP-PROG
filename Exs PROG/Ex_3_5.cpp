#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

bool readFracc(int &numerator, char &op, int &denominator)
{
	if ((op != '/') | (denominator==0)) { 
		numerator = 0;
		denominator = 0;
		return false;
	}
	else {
		return true;
	}
}

int main()
{
	int numerator, denominator;
	char op;
	cout << "fraction: ";
	cin >> numerator >> op >> denominator;
	cout << readFracc(numerator,op, denominator);

}