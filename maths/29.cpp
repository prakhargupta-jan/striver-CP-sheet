/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// https://codeforces.com/problemset/problem/1620/B     Triangles on a Rectangle

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        ll w, h;
        cin >> w >> h;
        ll sln = INT_MIN;
        ll a1, b1;
        ll k;
        cin >> k;
        for (ll i= 0; i < k; i++) {
            if (i == 0) {
                cin >> a1;
                continue;
            }
            if (i == k-1) {
                cin >> b1;
                continue;
            }
            ll temp;
            cin >> temp;
        }
        sln = max(sln, (b1-a1)*h);
        cin >> k;
        for (ll i= 0; i < k; i++) {
            if (i == 0) {
                cin >> a1;
                continue;
            }
            if (i == k-1) {
                cin >> b1;
                continue;
            }
            ll temp;
            cin >> temp;
        }
        sln = max(sln, (b1-a1)*h);
        cin >> k;
        for (ll i= 0; i < k; i++) {
            if (i == 0) {
                cin >> a1;
                continue;
            }
            if (i == k-1) {
                cin >> b1;
                continue;
            }
            ll temp;
            cin >> temp;
        }
        sln = max(sln, (b1-a1)*w);
        
        cin >> k;
        for (ll i= 0; i < k; i++) {
            if (i == 0) {
                cin >> a1;
                continue;
            }
            if (i == k-1) {
                cin >> b1;
                continue;
            }
            ll temp;
            cin >> temp;
        }
        sln = max(sln, (b1-a1)*w);
        cout << sln << endl;
    }

    return 0;
}