/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    if (n <=  2) {
        cout << "No" << endl;
        return 0;
    } else {
        cout << "Yes" << endl;
    }
    if (n&1) cout << (n+1)/2 << ' ';    
    else cout << n/2 << ' ';
    for (int i = 1; i <= n; i+=2) cout << i << ' ';
    cout << endl;
    cout << n/2 << ' ' ;
    for (int i = 2; i <= n; i+=2) cout << i << ' ';
    cout << endl;
    return 0;
}