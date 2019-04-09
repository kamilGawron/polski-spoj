#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Zestaw {
public:
	vector <int> liczby;
	vector <int> parzyste;
	vector <int>nieparzyste;
	Zestaw(vector <int> liczbyP) {
		liczby = liczbyP;
		for (int i = 0; i < liczby.size(); i++) {
			if (liczby[i] % 2 == 0) {
				parzyste.push_back(liczby[i]);
			}
			else {
				nieparzyste.push_back(liczby[i]);
			}
		}
	}
	void zwrocNieparzyste() {
		for (int i = 0; i < parzyste.size(); i++)
		{
			cout << parzyste[i] << " ";
		}
	}
	void zwrocParzyste() {
		for (int i = 0; i < nieparzyste.size(); i++)
		{
			cout << nieparzyste[i] << " ";
		}
	}
	void zwrocLiczby() {
		for (int i = 0; i <liczby.size(); i++)
		{
			cout << liczby[i] << " ";
		}
	}
	}
};

int main() {
	
	int ileZestawow,ileLiczb,liczba;
	vector <int> liczby;
	vector <Zestaw> zestawy;
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++)
	{
		liczby.clear();
		cin >> ileLiczb;
		for (int j = 0; j < ileLiczb; j++)
		{
			cin >> liczba;
			liczby.push_back(liczba);
		}
		zestawy.push_back(Zestaw(liczby));

	}
	for (int i = 0; i < zestawy.size(); i++)
	{
		//zestawy[i].zwrocParzyste();
		//zestawy[i].zwrocNieparzyste();
		zestawy[i].zwrocLiczby();

		cout << endl;

	}
	
	system("pause");
	return 0;
}