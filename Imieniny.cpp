#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	vector<int> v; //1 dla "TAK" 0 dla "NIE"
	int ileZestawow, ileCukierkow, ileOsob;
	cin >> ileZestawow;
	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> ileOsob >> ileCukierkow;
		if (ileOsob == 1) {
			v.push_back(1);
		}
		else if (  ileCukierkow % (ileOsob - 1) == 0) {
			v.push_back(0);
		}
		else {
			v.push_back(1);
		}
	}
	for (int i = 0; i < v.size(); i++)
	{
		v[i] == 1 ? cout << "TAK\n" : cout << "NIE\n";
	}
	
	system("pause");
	return 0;
}