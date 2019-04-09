#include <iostream>
#include <cstdlib>

using namespace std;

void obliczSilnie(long long tab[], int indeks, long long liczba) {
	long long liczbaTmp = 1;
	if (liczba > 1 && liczba<10) {
		for (int i = 1; i <= liczba; i++) {
			liczbaTmp *= i;
		}
	}
	else if (liczba>=10) {
		liczbaTmp = 100;
	}
	tab[indeks] = liczbaTmp;
	
}

int main() {
	int ileLiczb = 0;
	long long liczba = 0;
	
	cin >> ileLiczb;
	long long *tablicaSilni = new long long[ileLiczb];

	for (int i = 0; i < ileLiczb; i++)
	{
		cin >> liczba;
		obliczSilnie(tablicaSilni, i, liczba);

	}
	for (int i = 0; i < ileLiczb; i++)
	{
		if (tablicaSilni[i] > 10) {
			long long
				tmp = tablicaSilni[i] / 10;
			cout << tmp % 10 << " " << tablicaSilni[i] % 10 << endl;
		}
		else {
			cout << 0 << " " << tablicaSilni[i] % 10 << endl;
		}
	}
	delete[] tablicaSilni;
	system("pause");
	return 0;
}