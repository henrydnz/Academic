#include <bits/stdc++.h>
using namespace std;

// bino = par
// cino = impar

int main() {
    int a, b; cin >> a >> b;
    if (a + b % 2 & 1) cout << "Cino" << endl;
    else cout << "Bino" << endl;
    return 0;
}