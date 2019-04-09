#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int ileLiczb, przesuniecie,liczba;
	vector<int> v;
	cin >> ileLiczb >> przesuniecie;
	for (int i = 0; i < ileLiczb; i++)
	{
		cin >> liczba;
		v.push_back(liczba);
	}
	for (int i = przesuniecie; i < ileLiczb; i++)
	{
		cout << v[i] << " ";
	}
	for (int i = 0; i < przesuniecie; i++)
	{
		cout << v[i] << " ";
	}
	system("pause");
	return 0;
}