#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

void simplify(const string s, string &str) {

	string first, last;
	first = s.substr(0, s.find_first_of(" "));
	str.clear();
	str += first;
	last = s.substr(s.find_last_of(" ")+1);
	if (last != "") {
		str += " " + last;
	}
}

int main()
{
	ifstream inFile("people1.txt");
	ofstream outFile("people2.txt");

	string str;
	string newStr;
	vector<string> container;

	if (inFile.fail())
	{
		cout << "people1.txt not found";
		return 1;
	}
	
	while (getline(inFile,str)) {
		simplify(str, newStr);
		container.push_back(newStr);

	}

	sort(container.begin(),container.end());

	for (const string &s : container)
		outFile << s;

	return 0;

}