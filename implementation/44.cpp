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
        string s;
        cin >> s;
        int x = -1, y = -1;
        for (int i = 0; i < n; i++) {
            if (s[i] == '1')
                x = i;
        }
        for (int i = n-1; i >= 0; i--) {
            if (s[i] == '1') {
                y = i;
            }
        }
        cout << max(n, max(2*(x+1), (y > -1 ? 2*(n-y) : 0))) << endl;
    }
    

    return 0;
}