#include <iostream>
#include <cstdlib>
#include <vector>


using namespace std;

class Rownanie {
	double a, b, c,delta;
public:
	Rownanie(double a, double b, double c) : a(a), b(b), c(c) {
		delta = b * b - 4 * a*c;
	}
	int ileMiejscZerowych() {
		if (delta  < 0) {
			return 0;
		}
		else if (delta == 0) {
			return 1;
		}
		else if (delta > 0) {
			return 2;
		}

	}
};

int main() {
	int ileZestawow;
	double a, b, c;
	vector<Rownanie> vr;

	while(cin>>a>>b>>c){
		vr.push_back(Rownanie(a, b, c));
	}
	for (int i = 0; i <vr.size(); i++)
	{
		cout << vr[i].ileMiejscZerowych() << endl;
	}


	system("pause");
	return 0;
}