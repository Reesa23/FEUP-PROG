#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

bool isHydroxide(char compound[])
{
	int end = (strlen(compound) - 1);
	int start = (strlen(compound) - 2);

	if (compound[start] == 'O' && compound[end] == 'H')
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main()
{
	char test[] = "KOH";
	cout << isHydroxide(test);
}