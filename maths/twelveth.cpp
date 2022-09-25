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
        int n;
        cin >> n;
        int eve = 0, odd = 0;
        for (int i = 0; i < n; i++) {
            int a;
            cin >> a;
            // cout << "a  " << (a&1) << ' ' << (i&1) << endl;
            if ((a&1) != (i&1)) {
                (i&1) ? odd++ : eve++;
            }
        }
        // cout << eve << ' ' << odd << endl;
        if (eve == odd)
            cout << eve << endl;
        else
            cout << -1 << endl;
    }

    return 0;
}