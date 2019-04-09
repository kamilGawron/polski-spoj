#include <iostream>
#include <cstdlib>
#include <vector>

class Tablica {
public:
	int *tabReverse;
	int licznik = 0;
	int rozmiar;
	Tablica() {};
	Tablica(int rozmiar, int tab[]) {
		this->rozmiar = rozmiar;
		tabReverse = new int[rozmiar];
		for (int i = rozmiar - 1; i >= 0; i--) {
			tabReverse[licznik] = tab[i];
			licznik++;
		}
	}

};

using namespace std;
int main() {
	int ileTestow,rozmiar,liczba;
	cin >> ileTestow;
	
	vector <Tablica> vektorTablic;
	
	for (int i = 0; i < ileTestow; i++) {
		cin >> rozmiar;
		int *tab = new int[rozmiar];
		for (int j = 0; j < rozmiar; j++) {
			cin >> liczba;
			tab[j] = liczba;
		}
		vektorTablic.push_back(Tablica(rozmiar, tab));
	}
	for (int i = 0; i < ileTestow; i++) {

		for (int j = 0; j < vektorTablic[i].rozmiar; j++) {
			cout << vektorTablic[i].tabReverse[j] << " ";
		}
	}
	
	system("pause");
	return 0;
}