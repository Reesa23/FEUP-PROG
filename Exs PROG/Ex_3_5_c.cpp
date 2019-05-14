#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int mdc(int m, int n)
{
	int div = m;
	while (div != 0)
	{
		if ((m%div == 0)&&(n%div == 0))
		{
			return div;
		}
		div -= 1;
	}
}

void reduceFracc(int &numerator, int &denominator)
{
	int m, n, factor;
	if (numerator < denominator) { m = denominator;
	n = numerator;
	}
	else {
		m = numerator;
		n = denominator;
	}
	factor = mdc(m, n);
	numerator = numerator / factor;
	denominator = denominator / factor;
	
}

int main()
{
	int numerator, denominator;
	cout << "numerator and denominator: ";
	cin >> numerator >> denominator;
	reduceFracc(numerator, denominator);
	cout << numerator << "/" << denominator;
}