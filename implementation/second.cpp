/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    string s, sln;
    cin >> s;
    int n = s.length();
    bool fishy = true;
    for (int i = 0; i < n; i++)
    {
        if (i == n - 1 and s[i] == '9' and fishy)
        {
                sln += '9';
        } else if (i == 0 and s[i] == '9') {
            sln+='9';
        }
        else if (s[i] - '0' >= 5)
        {
            sln += ('9' - s[i] + '0');
        }
        else
        {
            sln += s[i];
        }
        if (sln[i] != '0')
            fishy = false;
    }
    cout << sln << endl;

    return 0;
}