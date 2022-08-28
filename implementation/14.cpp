/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    while (k) {
        if (n%10 > 0 and k >= n%10) {
            k -= n%10;
            n-=n%10;
        } else if (n%10 > 0 and k < n%10) {
            n-=k;
            k = 0;
        } else {
            k-=1;
            n /= 10;
        }
    }
    cout << n << endl;
    return 0;
}