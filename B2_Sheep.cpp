
#include <iostream>
#include <algorithm>
#include<queue>

using namespace std;

int arr[10];
int n, l;
queue<int> q;

int main() {
	cin >> n >> l;
	for (int i = 0; i <= 9; i++)
		arr[i] = false;
	for (int i = 1; i <= l; i++)
	{
		int x;
		cin >> x;
		arr[x] = true;
	}
	for (int i = 1; i <= 9; i++)
		if (!arr[i]) {
			n--;
			q.push(i);
			if (n == 0) {
				cout << i;
				return 0;
			}
		}
	while (true) {
		int so = q.front();
		q.pop();
		for (int i = 0; i <= 9; i++)
			if (!arr[i]) {
				n--;
				q.push(so * 10 + i);
				if (n == 0) {
					cout << so * 10 + i;
					return 0;
				}
			}
	}
}
