/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// https://codeforces.com/problemset/problem/610/A      Pasha and Stick
// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    if (n&1) {
        cout << 0 << endl;
        return 0;
    }
    n/=2;
    cout << (n-1)/2 << endl;

    return 0;
}