/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin >> n >> m;
    int sln = 0;
    while((m/n)%3 == 0) {
        sln++;
        n*=3;
    }
    while((m/n)%2 == 0) {
        sln++;
        n*=2;
    }
    if (m != n)
        cout << -1 << endl;
    else
        cout << sln << endl;

    return 0;
}