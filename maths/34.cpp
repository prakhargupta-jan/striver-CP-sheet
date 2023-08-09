/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int x, y;
        cin >> x >> y;
        if (x > 3) {
            cout << "YES" << endl;
        } else if (x == 1) {
            if (y == 1)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        } else {
            if (y < 4)
                cout << "YES" << endl;
            else
                cout << "NO" << endl;
        }
    }

    return 0;
}