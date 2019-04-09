#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;


class Tablica {
public:
	int *tablica;
	int rozmiar;
	Tablica(){}
	Tablica(int rozmiar, int tab[]) {
		tablica = new int[rozmiar];
		this->rozmiar = rozmiar;
		for (int i = 0; i < rozmiar; i++)
		{
			tablica[i] = tab[i];
		}
	}
};


int main() {
	int ileZestawow,ileLiczb,liczba;
	
	vector <Tablica> v;
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++) {
		cin >> ileLiczb;
		int * tab = new int[ileLiczb];
		for (int j = 0; j < ileLiczb; j++)
		{
			cin >> liczba;
			tab[j] = liczba;
		}
		v.push_back(Tablica(ileLiczb, tab));
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 1; j < v[i].rozmiar; j++)
		{
			cout << v[i].tablica[j] << " ";
		}
		cout << v[i].tablica[0] << endl;
	}
	system("pause");
	return 0;
}