#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

int main() {
	int liczba;
	int licznik = 0;
	vector<int> v;
	while (cin >> liczba) {
		v.push_back(liczba);
	}
	cout << v[0]<<endl;
	for (int i = 1; i < v.size(); i++)
	{
		if (v[i] == 42 && v[i - 1] != 42) {
			licznik++;
		}
		cout << v[i] << endl;
		if (licznik == 3){
			break;
		}
	}
	system("pause");
	return 0;
}