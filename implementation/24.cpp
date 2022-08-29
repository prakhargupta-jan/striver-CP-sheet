/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int nDig = 0, n = 0;
        n = x%10;
        while (x) {
            nDig++;
            x/=10;
        }
        cout << 10*(n-1) + nDig*(nDig+1)/2 << endl;
    }
    

    return 0;
}