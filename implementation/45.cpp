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
        string s;
        cin >> s;
        int i = 0, j = n-1;
        while (i < j) {
            if (abs(s[i]-s[j]) != 2 and abs(s[i]-s[j]) != 0) {
                cout << "NO" << endl;
                goto PP;
            }
            i++;
            j--;
        }
        cout << "YES" << endl;
        PP:
        continue;
    }

    return 0;
}