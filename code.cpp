#include <iostream>
using namespace std;
int main() {
	int x, n, d, j, k;
	int number[50];
	cout << "How many numbers should you write?: ";
	cin >> x;
	for (int i=0; i<x; i++) {
		cout << "Number (" << i + 1 << "): ";
		cin >> number[i];
	}
	for (int i=0; i<x; i++) {
		cout << number[i] << endl;
	}
	cout << "What you want to see?:" << endl;
	cout << "(1) Pairs" << endl << "(2) Odds" << endl;
	cin >> d;
	if (d == 1) {
		for (int j=0; j<x; j++) {
			if (number[j] % 2 == 0) {
				cout << number[j] << endl;
			}
		}
	} else if (d == 2) {
		for (int k=0; k<x; k++) {
			if (number[k] % 2 != 0) {
				cout << number[k] << endl;
			}
		}
	}
	return 0;
}
