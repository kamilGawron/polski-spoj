#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>
using namespace std;

class Gra {
public:
	int zetonyA, zetonyB;
	int max;
	Gra(int a, int b) {
		zetonyA = a;
		zetonyB = b;
	}
	int zwrocSumePoGrze() {
		while (zetonyA!= zetonyB) {
			if (zetonyA < zetonyB) {
				zetonyB -= zetonyA;
			}
			else {
				zetonyA -= zetonyB;
			}
		}
		return zetonyA + zetonyB;
	}
};

int main() {
	int ileZestawow;
	int zetonyA, zetonyB;
	vector <Gra> gry;
	
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> zetonyA;
		cin >> zetonyB;
		gry.push_back(Gra(zetonyA, zetonyB));
	}
	
	for (int i = 0; i < gry.size(); i++)
	{
		cout << gry[i].zwrocSumePoGrze() << endl;
	}

	system("pause");
	return 0;
}