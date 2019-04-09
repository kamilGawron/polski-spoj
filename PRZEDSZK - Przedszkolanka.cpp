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
	int *l1 = new int[ileTestow];
	int *l2 = new int[ileTestow];
	
	for (int i = 0; i < ileTestow; i++) {
		cin >> a >> b;
		l1[i] = a;
		l2[i] = b;
		tab[i] = nwd(a, b);
		
	}
	for (int i = 0; i < ileTestow; i++) {
		cout << (l1[i]*l2[i]/tab[i]) << endl;
	}

	delete[] tab,l1,l2;
	system("pause");
	return 0;
}