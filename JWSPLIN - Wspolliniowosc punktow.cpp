#include <iostream>
#include <cstdlib>
#include <math.h>
#include <vector>
#include <string>
using namespace std;
int main() {

	int ileZestawow;
	int xa, ya, xb, yb, xc, yc;
	double ab, ac, bc;
	vector <string> wyniki;
	cin >> ileZestawow;
	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> xa >> ya >> xb >> yb >> xc >> yc;
		ab = sqrt(pow((xb-xa),2)+ pow((yb - ya), 2));
		ac = sqrt(pow((xc - xa), 2) + pow((yc - ya), 2));
		bc = sqrt(pow((xc - xb), 2) + pow((yc - yb), 2));

		if ((ab==ac+bc)||ac==ab+bc||bc==ab+ac)
		{
			wyniki.push_back("TAK");
		}
		else {
			wyniki.push_back("NIE");
		}
		
	}
	for (int i = 0; i < wyniki.size(); i++)
	{
		cout << wyniki[i] << endl;
	}

	system("pause");
	return 0;
}