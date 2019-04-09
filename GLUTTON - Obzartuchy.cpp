#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;
class Obzartuch {
public:
	long czas;
	Obzartuch() {}
	Obzartuch(long czas) {
		this->czas = czas;
	}
};
class Zlot {
public:
	int ileObzartuchow;
	long ileCiastekWPaczce, liczbaPotrzebnychCiastek = 0;
	vector <Obzartuch> obzartuchy;
	Zlot(int ileObzartuchow, long ileCiastekWPaczce,vector <Obzartuch> obzartuchy) {
		this->ileCiastekWPaczce = ileCiastekWPaczce;
		this->ileObzartuchow = ileObzartuchow;
		this ->obzartuchy = obzartuchy;
		for (int i = 0; i < obzartuchy.size(); i++)
		{
			liczbaPotrzebnychCiastek += (24 * 60 * 60) / obzartuchy[i].czas;
			

		}
		
	}
	long zwrocLiczbePaczek() {
		if (liczbaPotrzebnychCiastek%ileCiastekWPaczce != 0) {
			return liczbaPotrzebnychCiastek / ileCiastekWPaczce + 1;
		}
		else {
			return liczbaPotrzebnychCiastek / ileCiastekWPaczce;

		}
	}
	void drukujDaneZlotu() {
		cout << "liczba Obzartuchow: " << obzartuchy.size()<<endl;
		cout << "ciastek w paczce: " << ileCiastekWPaczce << endl;
		for (int i = 0; i < obzartuchy.size(); i++)
		{
			cout << "czas " << i + 1 << " ob: " << obzartuchy[i].czas<<endl;
		}
	}
	
};
int main() {
	int ileZestawow;
	int ileObzartuchow;
	long czas=0,ileCiastekWPudle;
	vector <Obzartuch> obzartuchy;
	vector<Zlot> zloty;

	cin >> ileZestawow;
	for (int i = 0; i < ileZestawow; i++)
	{
		obzartuchy.clear();
		cin >> ileObzartuchow;
		cin >> ileCiastekWPudle;
		for (int j = 0; j < ileObzartuchow; j++)
		{
			cin >> czas;
			obzartuchy.push_back(Obzartuch(czas));
		}
		zloty.push_back(Zlot(ileObzartuchow, ileCiastekWPudle, obzartuchy));
	}

	for (int i = 0; i < ileZestawow; i++)
	{
		cout<<zloty[i].zwrocLiczbePaczek()<<endl;
	}

	system("pause");
	return 0;
}