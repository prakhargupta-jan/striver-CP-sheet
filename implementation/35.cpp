/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        ll a, b, c;
        cin >> a >> b >> c;
        ll slnA = -1, slnB = -1;
        if (a < c) slnA = 1;
        if (a*b > c) slnB = b;
        cout << slnA << ' ' << slnB << endl;
    }
    

    return 0;
}