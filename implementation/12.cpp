/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    int luckyDigits = 0;
    while (n) {
        int x = n%10;
        n = n/10;
        if (x == 4 || x == 7)
            luckyDigits++;
    }
    if (luckyDigits == 4 or luckyDigits == 7)
    cout << "YES" << endl;
    else
    cout << "NO" << endl;

    return 0;
}