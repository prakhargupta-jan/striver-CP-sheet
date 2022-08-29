/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while(t--) {
        string s;
        cin >> s;
        int total0s = 0;
        for (auto i : s) {
            if (i == '0')
                total0s++;
        }
        int i = 0, sub = 0;
        while (i <= s.length()-1 and s[i] == '0') {
            sub++;
            i++;
        }
        i = s.length()-1;
        while (i >= 0 and s[i] == '0') {
            sub++;
            i--;
        }
        cout << max(0, total0s - sub) << endl;
    }

    return 0;
}