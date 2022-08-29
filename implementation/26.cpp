/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    string sln;
    int i = 0, j = 1;
    while (i < n) {
        sln+= s[i];
        i+=j;
        j++;
    }
    cout << sln << endl;
    return 0;
}