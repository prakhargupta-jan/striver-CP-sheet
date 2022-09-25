/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n%4 != 0) {
            cout << "NO" << endl;
            continue;
        } else
            cout << "YES" << endl;
            for (int i = 2; i <=n; i+=2) {
                if (i == (n+2)/2)
                    continue;
                cout << i << ' ';
            }
            for (int i = 1; i <= n+1; i+=2) {
                if (i == (n+2)/2)
                    continue;
                cout << i << ' ';
            }
            cout << endl;
    }
    

    return 0;
}