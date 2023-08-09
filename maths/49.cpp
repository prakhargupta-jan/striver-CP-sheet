/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll pew(ll a, ll b) {
    if (b == 0)
        return 1;
    if (b == 1)
        return a;
    if (!(b&1)) {
        return pow(a*a,b/2);
    }
    return a*pow(a*a, b/2);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    cout << 1+3*n*(n+1);

    return 0;
}