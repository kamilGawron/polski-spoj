#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	int ileTestow;
	int ileKotow, wagaPaczka, udzwigHarego;
	vector<int> v;

	cin >> ileTestow;
	for (int i = 0; i < ileTestow; i++)
	{
		cin >> ileKotow >> udzwigHarego >> wagaPaczka;
		if (ileKotow*wagaPaczka > udzwigHarego) {
			v.push_back(0);
		}
		else {
			v.push_back(1);
		}
	}
	for (int i = 0; i < ileTestow; i++) {
		v[i] == 0 ? cout << "no\n" : cout << "yes\n";
	}


	system("pause");
	return 0;
}