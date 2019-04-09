#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Pesel {
public:
	string pesel;
	int sumaKontrolna=0;
	vector <int> liczbyP;
	Pesel(string p) {
		pesel = p;
		for (int i = 0; i < 11; i++)
		{
			liczbyP.push_back((int)pesel[i]-48);
		}
		sumaKontrolna += liczbyP[0] * 1;
		sumaKontrolna += liczbyP[1] * 3;
		sumaKontrolna += liczbyP[2] * 7;
		sumaKontrolna += liczbyP[3] * 9;
		sumaKontrolna += liczbyP[4] * 1;
		sumaKontrolna += liczbyP[5] * 3;
		sumaKontrolna += liczbyP[6] * 7;
		sumaKontrolna += liczbyP[7] * 9;
		sumaKontrolna += liczbyP[8] * 1;
		sumaKontrolna += liczbyP[9] * 3;
		sumaKontrolna += liczbyP[10] * 1;

	}
	bool czyPoprawnyPesel() {
		if (sumaKontrolna > 0 && sumaKontrolna % 10 == 0) {
			return true;
		}
		else {
			return false;
		}
	}

};



int main() {
	int ileZestawow;
	string pesel;
	vector <Pesel> pesele;
	
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> pesel;
		pesele.push_back(Pesel(pesel));
	}
	
	for (int i = 0; i < pesele.size(); i++)
	{	
		if (pesele[i].czyPoprawnyPesel()) {
			cout << "D";
		}
		else {
			cout << "N";
		}
		cout << endl;
	}
	system("pause");
	return 0;
}