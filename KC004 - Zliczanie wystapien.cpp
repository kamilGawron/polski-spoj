#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main() {
	vector <int> v;
	int i;
	int szukana, ileLiczb,liczba ;
	
	while (cin >> szukana >> ileLiczb) {
		int i,licznik=0;
		for (i = 0; i < ileLiczb; i++) {
			cin >> liczba;
			if (szukana == liczba) {
				licznik++;
			}
		}
		v.push_back(licznik);
	}


	for (i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}