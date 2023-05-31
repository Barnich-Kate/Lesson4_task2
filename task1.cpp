#include <iostream>
#include <math.h>
#include <cstdlib>
using namespace std;

int PowerA3 (int a, int b) {
	return a;
}

int main() {
	int i, j, res = 0;
	cout << "Type power: ";
	cin >> j;
	for (int y = 0; y < 5; y++) {
		cout << "Type number: ";
		cin >> i;
		res = pow(i, j);
		PowerA3 (res, j);
		PowerA3 (res, j);
		PowerA3 (res, j);
		PowerA3 (res, j);
		PowerA3 (res, j);
		cout << PowerA3 (res,j) << endl;

		}

	}
    
