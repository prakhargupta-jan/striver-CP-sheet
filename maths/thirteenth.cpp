/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// HOLD
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x, y, n;
        cin >> x >> y >> n;
        cout << (n/x)*(x&1 ? x-1 : x) + y << endl;
    }

    return 0;
}