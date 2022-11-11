/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// stuck
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll x, y, z;
    cin >>x >> y >> z;
    int p = (x+y)/z;
    cout << p;
    if (x%z || y%z) {
        cout << ' ' << min(max((x/z+1)*z-x, (long long)0),max((y/z+1)*y-y, (long long)0)) << endl;
    } else {
        cout << ' ' << 0 << endl;
    }
    return 0;
}