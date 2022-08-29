/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int p = 1, q = 1, s = 1;
    while (p < n) {
        // cout << p << " " << q << endl;
        s++;
        q+=s;
        p+=q;
    }
    cout << (p == n ? s : s-1) << endl;
    return 0;
}