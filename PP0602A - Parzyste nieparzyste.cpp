#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

class Zestaw {
public:
	vector <int> liczby;
	vector <int> parzyste;
	vector <int> nieparzyste;
	Zestaw(vector <int> v) {
		liczby = v;
		for (int i = 0; i < liczby.size(); i++)
		{
			if (i % 2 == 0) {
				nieparzyste.push_back(liczby[i]);
			}
			else {
				parzyste.push_back(liczby[i]);
			}
		}
	}
	void zwrocParzyste(){
		for (int i = 0; i < parzyste.size(); i++)
		{
			cout << parzyste[i] << " ";
		}
	}
	void zwrocNieparzyste() {
		for (int i = 0; i < nieparzyste.size(); i++)
		{
			cout << nieparzyste[i] << " ";
		}
	}
};


int main() {
	int ileZestawow, ileLiczb,liczba;
	vector <int> liczby;
	vector <Zestaw> zestawy;
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++)
	{
		liczby.clear();
		cin >> ileLiczb;
		for (int i = 0; i < ileLiczb; i++)
		{
			cin >> liczba;
			liczby.push_back(liczba);
		}
		zestawy.push_back(Zestaw(liczby));
	}
	for (int i = 0; i < zestawy.size(); i++)
	{
		for (int j = 0; j < zestawy[i].parzyste.size(); j++)
		{
			cout << zestawy[i].parzyste[j] << " ";
		}
		for (int j = 0; j < zestawy[i].nieparzyste.size(); j++)
		{
			cout<<zestawy[i].nieparzyste[j]<< " ";
		}
		cout << endl;
	}
	
	system("pause");
	return 0;
}