/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

ll mnDigit(ll a) {
    ll sln = a;
    while (a) {
        sln = min(sln, a%10);
        a/=10;
    }
    return sln;
}
ll mxDigit(ll a) {
    ll sln = 0;
    while (a) {
        sln = max(sln, a%10);
        a/=10;
    }
    return sln;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll a, k;
        cin >> a >> k;
        ll ak = a;
        for (ll i = 1; i < k; i++) {
            ak = a+mnDigit(a)*mxDigit(a);
            a = ak;
        }
        cout << ak << endl;
    }

    return 0;
}