/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    int sln = 0;
    while (t--)
    {
        int n;
        cin >> n;
        sln |= n;
    }
    cout << (sln ? "HARD" : "EASY") << endl;

    return 0;
}