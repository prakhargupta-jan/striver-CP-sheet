/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int x = 0, y = 0, z = 0;
    while (n--) {
        int a, b, c;
        cin >> a >> b >> c;
        x+=a;y+=b;z+=c;
    }
    cout << ((x == 0 and y == 0 and z == 0) ? "YES" : "NO") << endl;
    return 0;
}