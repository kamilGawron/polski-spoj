#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;

class Wyraz {
	string wyraz,wyrazWspak="";
	int dlugosc;
public:
	Wyraz(string wyraz) :wyraz(wyraz) {
		dlugosc = wyraz.length();
	}
	string zwrocWyrazWspak() {
		for (int i = dlugosc-1; i >=0; i--)
		{
			wyrazWspak += wyraz[i];
		}
		return wyrazWspak;
	}
};

int main() {
	vector <Wyraz> vw;
	string wyraz;
	for (int i = 0; i < 2; i++){
		cin >> wyraz;
		vw.push_back(Wyraz(wyraz));
	}
	for (int i = 0; i < vw.size(); i++)
	{
		cout << vw[i].zwrocWyrazWspak() << endl;
	}
	system("pause");
	return 0;
}