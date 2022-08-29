/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    string arr[5];
    bool found = false;
    for (int i = 0; i < 5; i++) {
        cin >> arr[i];
        if (arr[i][0] == s[0] or arr[i][1] == s[1])
            found = true;
    }
    cout << ( found ? "YES" : "NO") << endl;
    return 0;
}