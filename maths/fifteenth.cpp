/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// HOLD
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int k, r;
    cin >> k >> r;
    int sln = max ((k%r ? k : k/r), max(k, r)), x = k;
    int p = k;
    for (int i = 1; i < sln; i++) {
//        cout << i << ' ' << 'i' << endl; 
        x = k * i;
        if (x%10 == r || x%10 == 0) {
            sln = i;
            break;
        }
    }
    cout << sln << endl;
    return 0;
}