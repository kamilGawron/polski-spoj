#include <iostream>
#include <cstdlib>
#include <vector>

using namespace std;

int main() {
	double a, b, c;
	vector <int> v;

	while (cin >> a >> b >> c) {
		if (a>0&&b>0&&c>0&&(a < b + c) && (b < a + c) && (c < a + b)) {
			v.push_back(1);
		}
		else {
			v.push_back(0);
		}
	}

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << endl;
	}
	system("pause");
	return 0;
}