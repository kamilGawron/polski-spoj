#include <iostream>
#include <cstdlib>
#include <vector>
#include <string>

using namespace std;


int main() {
	vector <string> v;
	string line;
	string alphabet = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	while (getline(cin, line)) {
		v.push_back(line);
	}

	for (int i = 0; i < v.size(); i++)
	{
		for (int j = 0; j < v[i].length(); j++)
		{
			for (int k = 0; k < alphabet.length(); k++)
			{
				if (v[i][j] == 'X') {
					v[i][j] = 'A';
					break;
				}
				else if (v[i][j] == 'Y') {
					v[i][j] = 'B';
					break;
				}
				else if (v[i][j] == 'Z') {
					v[i][j] = 'C';
					break;
				}
				else if (v[i][j] == alphabet[k]) {
					v[i][j] = alphabet[k + 3];
					break;
				}
			}
		}
		cout << v[i] << endl;
	}

	system("pause");
	return 0;
}