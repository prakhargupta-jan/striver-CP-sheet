/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, m;
    cin >> n >> m;
    if (m > n){
        cout << -1 << endl;
        return 0;
    }
    int x = (n+1)/2;
    while (x <= n) {
        if (x%m == 0) {
            cout << x << endl;
            return 0;
        }
        x++;
    }
    cout << -1 << endl;
    return 0;
}