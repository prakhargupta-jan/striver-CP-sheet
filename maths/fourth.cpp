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
        int n, x;
        cin >> n >> x;
        int sln = ceil((float)(n-2)/x) +1; 
        cout << (sln <= 0 ? 1 : sln) << endl;
    }

    return 0;
}