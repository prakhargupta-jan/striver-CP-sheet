/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int a, b;
    cin >> a >> b;
    int sln = 0;
    while (a <= b) {
        sln++;
        a*=3;
        b*=2;
    }
    cout << sln << endl;
    return 0;
}