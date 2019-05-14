#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>

using namespace std;

bool sequenceSearch(string s, int nc, char c)
{
	int l, count;

	count = 0;
	l = s.length();

	for (int i = 0; i < l; i++)
	{
		if (s[i] == c)
		{
			count += 1;
		}
		else
		{
			count = 0;
		}
		if (count == nc)
		{
			return true;
		}
	}
	return false;

}

int main()
{
	int nc;
	char c;
	string s;
	cout << "sequence, number of characters and character: ";
	cin >> s >> nc >> c;
	cout << sequenceSearch(s, nc, c);

}