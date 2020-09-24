#include <iostream>

using namespace std;

int main() {

	int n;
	cin >> n;

	int x, y; // x - so phong 2 giuong , y - so phong 3 giuong

	if (n % 3 == 0) {
		cout << '0 ' << n;
		return 0;
	}

	int div = n / 3;
	x = (div + 1) * 3 - n;
	y = (n - 2*x) /3;
	cout << x << " " << y;


	return 0;
}
