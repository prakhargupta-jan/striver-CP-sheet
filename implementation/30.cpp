/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// Pending
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << 2 << endl;
        if (n == 2) {
            cout << 2 << endl;
            cout << 1 << ' ' << 2 << endl;
            continue;
        }
        if (n == 3) {
            cout << 2 << endl;
            cout << 3 << ' ' << 1 << endl;
            cout << 2 << ' ' << 2 << endl;
            continue;
        }
        int x = n-2, y = n;
        int k = x;
        bool puchka = true;
        while (y != 0) {
            if (puchka) {
                puchka = false;
                cout << x << ' ' << y << endl;
                x++;
                y--;
                continue;
            }
            if (y == k) {
                y--;
                x++;
            }
            cout << x << ' ' << y << endl;
            x--;
            y--;
        } 
        
    }

    return 0;
}