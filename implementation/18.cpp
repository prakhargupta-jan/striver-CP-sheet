/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    if (s[0] >= 'a' and s[0] <= 'z')
        s[0] = s[0] - ('a' - 'A');
    cout << s << endl;
    return 0;
}