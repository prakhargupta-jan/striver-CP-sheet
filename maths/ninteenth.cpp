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
        int a, b;
        cin >> a >> b;
        if (a < b) {
            cout << b-a << endl;
        } else {
            if (a%b == 0) {
                cout << 0 << endl;
            } else {
                cout << ((a/b)+1)*b-a << endl;
            }
        }
    }
    return 0;
}