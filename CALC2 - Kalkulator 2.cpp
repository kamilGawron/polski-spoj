#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int tab[10];
	int liczba1, liczba2;
	char znak;
	vector<int>wyniki;
	while (cin >> znak >> liczba1 >> liczba2) {
		switch (znak) {
		case 'z':
			tab[liczba1] = liczba2;
			break;
		case '+':
			wyniki.push_back(tab[liczba1] + tab[liczba2]);
			break;
		case '-':
			wyniki.push_back(tab[liczba1] - tab[liczba2]);
			break;
		case '*':
			wyniki.push_back(tab[liczba1] * tab[liczba2]);
			break;
		case '/':
			wyniki.push_back(tab[liczba1] / tab[liczba2]);
			break;
		case '%':
			wyniki.push_back(tab[liczba1] % tab[liczba2]);
			break;
		default:break;
		}
	}
	for (int i = 0; i < wyniki.size(); i++)
	{
		cout << wyniki[i] << endl;
	}
	system("pause");
	return 0;
}