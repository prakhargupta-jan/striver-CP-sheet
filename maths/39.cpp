/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Pending

string detectCommon(string s, string t) {
    string sln = "";
    int i = 0;
    int n = min(s.length(), t.length());
    while (s[i] == t[i] and i < n)
    {
        sln+=s[i];
        i++;
    }
    return sln;
}
int 

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s, t;
        cin >> s >> t;
        int n = s.length(), m = t.length();
    }

    return 0;
}