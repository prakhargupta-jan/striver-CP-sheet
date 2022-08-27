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
        int n;
        cin >> n;
        int p = 1;
        vector<int> sln;
        while (n) {
            if (n%10 != 0) {
                sln.push_back(n%10 * p);
            }
            n = n/10;
            p *= 10;
        }
        cout << sln.size() << endl;
        for (auto i : sln) {
            cout << i << " ";
        }
        cout << endl;
    }

    return 0;
}