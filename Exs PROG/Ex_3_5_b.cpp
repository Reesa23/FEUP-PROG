#include <iostream>

using namespace std;

void writeFracc(int numerator, int denominator)
{
	cout << numerator << "/" << denominator;
}

int main()
{
	int numerator, denominator;
	cout << "numerator and denominator: ";
	cin >> numerator >> denominator;
	writeFracc(numerator, denominator);
}