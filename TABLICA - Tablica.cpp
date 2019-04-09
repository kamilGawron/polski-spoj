#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

int main() {
	int a;
	vector <int> v;

	while (cin >> a) {
		v.push_back(a);
	}
	
	for (int i = v.size() - 1; i >= 0; i--) {
		cout << v[i]  <<" ";
	}
	
	system("pause");
	return 0;
}