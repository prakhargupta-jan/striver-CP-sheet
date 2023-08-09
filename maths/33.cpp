/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    double h, l;
    cin >> h >> l;
    cout << fixed << setprecision(13) << (l*l/(2*h) + h/2)-h << endl;

    return 0;
}