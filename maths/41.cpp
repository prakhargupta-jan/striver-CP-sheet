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
        int n, m, k;
        cin >> n >> m >> k;
        if (m == 0) {
            cout << 0 << endl;
            continue;
        }
        if (m < n/k) {
            if (m&1) {
                cout << m << endl;
            } else {
                cout << m-2 << endl;
            }
        } else {
            
        }
    }
    return 0;
}