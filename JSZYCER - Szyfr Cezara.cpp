#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>


using namespace std;

int main() {
	string line;
	vector <string> v;
	string alfabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (getline(cin,line)) {
		v.push_back(line);
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}