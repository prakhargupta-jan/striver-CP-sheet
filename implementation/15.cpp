/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int k, n, w;
    cin >> k >> n >> w;
    cout << max(0, w*k + w*(w-1)*(k)/2 - n) << endl;
    return 0;
}