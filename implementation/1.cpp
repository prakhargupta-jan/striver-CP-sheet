/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int q;
    cin >> q;
    int sln = 0;
    while (q--)
    {
        string s;
        cin >> s;
        if (s[1] == '+')
            sln++;
        else 
            sln--;
    }
    cout << sln << endl;
    return 0;
}