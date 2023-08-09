/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int a, b, s;
    cin >> a >> b >> s;
    if (s-abs(a)-abs(b) >= 0 and (s-abs(a)-abs(b))%2 == 0) cout << "Yes" << endl;
    else cout << "No" << endl;

    return 0;
}