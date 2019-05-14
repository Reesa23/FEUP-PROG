#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool main()
{
	int year;
	cout << "ano: ";
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 400 == 0)
		{
			return true;
		}
		else if (year % 100 == 0)
		{
			return false;
		}
		else
		{
			return true;
		}
	}
	else
	{
		return false;
	}
}