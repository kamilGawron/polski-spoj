#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;


int main() {
	vector <int> v;
	int liczba;
	int ileZestawow;
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++) {
		cin >> liczba;
		v.push_back(liczba*liczba);
	}
	for (int i = 0; i < ileZestawow; i++) {
		cout << v[i] << endl;
	}

	system("pause");
	return 0;
}