
#include <iostream>
#include <algorithm>

using namespace std;



int main() {

	long int q;
	int n;
	cin >> n;
	int  A[n];
	int m = 0;
	for (int i = 0; i < n; i++) {
		cin >> A[i];
		m = max(A[i], m);
	}
	cin >> q;
	long int sum = 0;
	for (int c : A) {
		sum = sum + m - c;

	}
	cout << sum * q;

	return 0;
}






