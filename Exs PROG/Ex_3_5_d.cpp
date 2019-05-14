#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

//mdc and reduce

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

void reduceFracc(int &numerator, int &denominator)
{
	int m, n, factor;
	if (numerator < denominator) {
		m = denominator;
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


// operations and main

void somasub(int &n1, int &d1, char &signal, int &n2, int &d2)
{
	if (d1 != d2)
	{
		n1 *= d2;
		n2 *= d1;
		d1 *= d2;
		d2 = d1;
	}

	if (signal == '+')
	{
		n1 = n1 + n2;
	}
	else
	{
		n1 = n1 - n2;
	}
}



void multidiv(int &n1, int &d1, char &signal, int &n2, int &d2)
{
	if (signal == '*')
	{
		n1 = n1 * n2;
		d1 = d1 * d2;
	}
	else
	{
		n1 *= d2;
		d1 *= n2;
	}
}

int main()
{
	int n1, d1, n2, d2;
	char signal, barra, barra2;
	cout << "operation: ";
	cin >> n1 >> barra >> d1 >> signal >> n2 >> barra2 >> d2;

	reduceFracc(n1, d1);
	reduceFracc(n2, d2);


	if ((signal == '+') || (signal == '-'))
	{
		somasub(n1, d1, signal, n2, d2);
	}
	else if ((signal == '*') || (signal == '/'))
	{
		multidiv(n1, d1, signal, n2, d2);
	}

	reduceFracc(n1, d1);

	cout << n1 << "/" << d1;

}