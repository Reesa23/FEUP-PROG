#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int mdc(int m, int n)
{
	int div = m;
	while (div != 0)
	{
		if ((m%div == 0) && (n%div == 0))
		{
			return div;
		}
		div -= 1;
	}
}

struct Fraction {
	int numerator;
	char op; 
	int denominator;
};

Fraction reduceFracc(Fraction f)
{
	int factor;
	
	factor = mdc(f.numerator, f.denominator);
	f.numerator = f.numerator / factor;
	f.denominator = f.denominator / factor;

	return f;
}

Fraction readFracc()
{
	Fraction frac;
	cout << "Fraction:";
	cin >> frac.numerator >> frac.op >> frac.denominator;

	return frac;
}

int main()
{
	Fraction frac = readFracc();
	frac = reduceFracc(frac);
	cout << frac.numerator << frac.op << frac.denominator;
	return 0;
}