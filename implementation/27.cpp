/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// Pending
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<char>> arr(n, vector<char> (m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> arr[i][j];
            }
        }
        int sln = 0;
        for (int i = 0; i < n; i++) {
            if (arr[i][m-1] == 'R') sln++;
        }
        for (int i = 0; i < m; i++) {
            if (arr[n-1][i] == 'D') sln++;
        }
        cout << sln << endl;
    }

    return 0;
}