#include <iostream>
#include <cstdlib>

using namespace std;
int nwd(int a, int b) {
	int dzielna, dzielnik, iloraz, reszta;

	if (a < b) {
		dzielna = b;
		dzielnik = a;
	}
	else {
		dzielna = a;
		dzielnik = b;
	}
	iloraz = dzielna / dzielnik;
	reszta = dzielna % dzielnik;

	while (reszta != 0) {
		dzielna = dzielnik;
		dzielnik = reszta;
		reszta = dzielna % dzielnik;
	}
	return dzielnik;

}
int main() {
	int ileTestow,a,b;

	cin >> ileTestow;
	int *tab = new int[ileTestow];
	
	for (int i = 0; i < ileTestow; i++) {
		cin >> a >> b;
		tab[i] = nwd(a, b);
	}
	for (int i = 0; i < ileTestow; i++) {
		cout << tab[i] << endl;
	}

	delete[] tab;
	system("pause");
	return 0;
}