#include <iostream>
//#include <iomanip>
//#include <cmath>
//#include <string>
#include <fstream:>

ifstream myfile(name_file);
string name;
vector<string> sorted;
if (myfile.is_open()) {
	while (getline(myfile, name))
	{

		sorted.push_back(name);
	}
	myfile.close();
}

else cout << "Unable to open file";

ofstream myfile2;
myfile2.open("names_sorted.txt");
for (int i = 0; i < sorted.size(); i++) {
	myfile2 << sorted[i] << endl;
}
myfile2.close();