/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int a, b, c, n;
        cin >> a >> b >> c >> n;
        int p = max(a, max(b, c));
        int x = n - (3*p - a - b - c);
        cout << (x < 0 or x%3 != 0 ? "NO" : "YES") << endl;
    }

    return 0;
}