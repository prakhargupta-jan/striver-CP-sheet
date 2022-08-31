/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, t;
    cin >> n >> t;
    int arr[n];
    for (int i = 1; i < n; i++) cin >> arr[i];
    for (int i = 1; i <= n;) {
        if (i == t) {
            cout << "YES" << endl;
            return 0;
        }
        if (i == n)
            break;
        i+=arr[i];
    }
    cout << "NO" << endl;
    return 0;
}