/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int sln = 0, c = 0;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        c += b - a;
        sln = max(c, sln);
    }
    cout << sln << endl;

    return 0;
}