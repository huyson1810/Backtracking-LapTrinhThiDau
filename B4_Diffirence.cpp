#include <iostream>

using namespace std;

int main(){
    int n;
    cin >> n;
    if ( n == 1) {cout << 0; return 0;}
    if ( n == 2) {cout << 72; return 0;}
    long long so = 1, sol = 9;
    int so1 = (n-1) /2;
    int so9 = n - 1 - so1;
    for (int  i = 1; i <= so1; i++)
        so = so * 10;
    for (int i = 1; i <= so9; i++)
        so = so*10+9;
    for (int i = 2; i <= so9; i++)
        sol = sol*10+9;
    sol = sol*10+1;
    for (int  i = 1; i <= so1; i++)
        sol = sol * 10;
    cout << sol - so;
    return 0;
}
