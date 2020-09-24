#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	double min = 10000;
	double max = 0;
	int a, b , out_min, out_max;
	cin >> a >> b;
	for (int i = a; i <= b; i++)
	{
		int temp = 0;
		for (int j = 1; j <= i / 2; j++)
			if (i%j == 0) temp = temp + j;
		if ((double)temp / i > max) {
			max = (double)temp / i;
			out_max = i;
		}
		if ((double)temp / i < min) {
			min = (double)temp/ i;
			out_min = i;
		}
	}
	cout << out_min << " " << out_max;

	return 0;
}
