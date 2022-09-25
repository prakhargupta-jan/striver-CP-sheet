/*                 Prakhar is a Free Soul                      */
// Ichihime and Triangle
// https://codeforces.com/problemset/problem/1337/A
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, d;
        cin >> a >> b >> c >> d;
        if (c == a + b) {
            if (b < c) {
                cout << a << ' ' << b+1 << ' ' << c << endl;
            } else if (a < b) {
                cout << a+1 << ' ' << b << ' ' << c;
            } else if (c < d){
                cout << a << ' ' << b << ' ' << c+1 << endl;
            } else {
                cout << a << ' ' << b << ' ' << d << endl;
            }
        }
        else 
            cout << a << ' ' << b << ' ' << c << endl;
    }

    return 0;
}