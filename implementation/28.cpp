/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    string sln;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u' or s[i] == 'A' or s[i] == 'E' or s[i] == 'I' or s[i] == 'O' or s[i] == 'U')
            continue;
        if (s[i] >= 'A' or s[i] <= 'Z') {
            sln+= '.';
            sln+= s[i] - 'A' + 'a';
        } else {
            sln+='.';
            sln+=s[i];
        }
    }
    cout << sln << endl;
    return 0;
}