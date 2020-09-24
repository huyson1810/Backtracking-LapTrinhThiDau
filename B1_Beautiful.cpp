#include <iostream>
#include <algorithm>

using namespace std;


long long int mu(int a , int b) {
    if (b==0)
        return 1;
    if (b==1)
        return a;
    for (int i=2 ; i<= b ; i++ ) {
        a*=10;
    }
    return a;
}

int main() {
	int k,n;
	cin >> n >> k;
	long long int m =  mu(10,n-1);
	if (m < k) {
        cout << "None";
        return 0;
	}
	if (m%k == 0) {
	    cout << m;
	    return 0;
	}
	long long int div = m / k;
	if (k*div < m)
	    cout << k*(div+1);

	return 0;
}






