/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    unordered_set<char> us;
    for (auto i : s)
        us.insert(i);
    if (us.size()&1)
        cout << "IGNORE HIM!" << endl;
    else
        cout << "CHAT WITH HER!" << endl;

    return 0;
}