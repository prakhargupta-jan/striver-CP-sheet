#include <bits/stdc++.h>
using namespace std;

// https://codeforces.com/problemset/problem/1266/B     Dice Tower
// Accepted

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >>n;
        long long x = n%14;
        if (x > 6 || x == 0 || n < 14 ) cout << "NO" << endl;
        else cout<< "YES" << endl;
    }
}