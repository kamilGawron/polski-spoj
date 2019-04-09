#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
int wykonaj(int liczba, int potega) {
	if (potega == 0) {
		return 1;
	}
	if (liczba % 10 == 0) {
		return 0;
	}
	else if (liczba % 10 == 1) {
		return 1;
	}
	else if (liczba % 10 == 2) {
		if (potega % 4 == 1) {
			return 2;
		}
		else if (potega % 4 == 2) {
			return 4;
		}
		else if (potega % 4 == 3) {
			return 8;
		}
		else if (potega % 4 == 0) {
			return 2;
		}
	}
	else if (liczba % 10 == 3) {
		if (potega % 4 == 1) {
			return 3;
		}
		else if (potega % 4 == 2) {
			return 9;
		}
		else if (potega % 4 == 3) {
			return 7;
		}
		else if (potega % 4 == 0) {
			return 1;
		}
	}
	else if (liczba % 10 == 4) {
		if (potega % 2 == 1) {
			return 4;
		}
		else {
			return 6;
		}
	}
	else if (liczba % 10 == 5) {
		return 5;
	}
	else if (liczba % 10 == 6) {
		return 6;
	}
	else if (liczba % 10 == 7) {
		if (potega % 4 == 1) {
			return 7;
		}
		else if (potega % 4 == 2) {
			return 9;
		}
		else if (potega % 4 == 3) {
			return 3;
		}
		else if (potega % 4 == 0) {
			return 7;
		}
	}
	else if (liczba % 10 == 8) {
		if (potega % 4 == 1) {
			return 8;
		}
		else if (potega % 4 == 2) {
			return 4;
		}
		else if (potega % 4 == 3) {
			return 2;
		}
		else if (potega % 4 == 0) {
			return 6;
		}
	}
	else if (liczba % 10 == 9) {
		if (potega % 2 == 0) {
			return 1;
		}
		else {
			return 9;
		}
	}
}
using namespace std;
int main() {
	int ileZestawow;
	int liczba, a;
	int potega;
	vector<int> wyniki;
	cin >> ileZestawow;
	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> liczba >> potega;
		a = liczba % 10;
		wyniki.push_back(wykonaj(liczba,potega));
	}
	for (int i = 0; i < ileZestawow; i++)
	{
		cout << wyniki[i]<<endl;
	}
	system("pause");
	return 0;
}