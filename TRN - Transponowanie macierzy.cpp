#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int m, n,liczba;
	cin >> m >> n;
	int ** tab = new int *[m];
	for (int i = 0; i < m; i++)
	{
		tab[i] = new int[n];
	}
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> liczba;
			tab[i][j] = liczba;
		}
	}
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			cout << tab[j][i] << " ";
		}
		cout << endl;
	}




	for (int i = 0; i < m; i++)
	{
		delete tab[i];
	}
	delete tab;
	system("pause");
	return 0;
}