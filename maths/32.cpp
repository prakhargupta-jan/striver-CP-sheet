/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// 
// Recheck
// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, m, a;
    cin >> n >> m >> a;
    long long sln = (ceil((double)n/a)*ceil((double)m/a));
    cout << fixed << setprecision(0) << sln << endl;

    return 0;
}