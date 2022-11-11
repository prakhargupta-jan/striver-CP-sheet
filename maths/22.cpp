/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n, m, k;
    cin >> n >> k >> m;
    ll a = 0, b = 0;
    for (int i = 0; i < n ; i++) {
        ll x;
        cin >> x;
        if (x > a) {
            b = a;
            a = x;
        }
        else if (x > b) {
            b = x;
        }
    }
    ll p = k/(m+1);
    cout << m*a*p+b*p+k%(m+1)*a << endl;

    return 0;
}