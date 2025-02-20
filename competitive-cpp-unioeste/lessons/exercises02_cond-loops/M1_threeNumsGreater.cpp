#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main()
{
    ll a, b, c, greater;
    cin >> a >> b >> c;
    if (a and b and c <= 1000){
        if (a > b) greater = a;
        else greater = b;
        if (c > greater) greater = c;
        cout << greater;
    }
}