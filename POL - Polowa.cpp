#include <iostream>
#include <cstdlib>
#include <string>
#include <vector>
using namespace std;
int main() {
	int ileZestawow;
	vector<string> napisy;
	cin >> ileZestawow;

	for (int i = 0; i < ileZestawow; i++)
	{
		cin >> napis;
		napisy.push_back(napis);
	}
	for (int i = 0; i < napisy.size(); i++)
	{
		for (int j = 0; j < napisy[i].length()/2; j++)
		{
			cout << napisy[i][j];
		}
		cout << endl;
	}
	system("pause");
	return 0;
}