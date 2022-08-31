/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    ll n;
    cin >> n;
    ll fours = 0, sevens = 0;
    while (n) {
        if (n%7 == 0) {
            sevens+=n/7;
            break;
        }
        n-=4;
        fours++;
        if (n < 0) {
            cout << -1 << endl;
            return 0;
        }
    }
    string sln = "";
    while (fours) {
        sln+='4';
        fours--;
    }
    while (sevens) {;
        sln+='7';
        sevens--;
    }
    cout << sln << endl;

    return 0;
}