#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int wykonajDzialanie(char znak, int a, int b) {
	int wynik = 0;
	znak == '+' ? wynik = (a + b) : 0 ;
	znak == '-' ? wynik = (a - b) : 0;
	znak == '/' ? wynik = (a / b) : 0;
	znak == '%' ? wynik = (a % b) : 0;
	znak == '*' ? wynik = (a * b) : 0;


	return wynik;


}

int main() {
	char znak;
	int a,b;
	vector <int> v;

	while(cin >> znak >> a >> b)
	{
		v.push_back(wykonajDzialanie(znak, a, b));
	}
	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}