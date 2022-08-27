/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int a, b, c;
    cin >> a>> b >> c;
    cout << min(abs(a - b) + abs(a - c), min(abs(b - a) + abs(b - c), abs(c - a) + abs(c - b))) << endl;

    return 0;
}