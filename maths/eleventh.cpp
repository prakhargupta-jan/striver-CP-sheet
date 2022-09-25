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
        int a,b;
        cin >> a >> b;
        int p = max(2*min(a, b), max(a, b));
        cout << p*p << endl;
    }

    return 0;
}