/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int a = 1, b = 2, c = 2;
    n-=1;
    while (n--) {
        a = a+b;
        b += c;
        c++;
    }
    cout << a << endl;
    return 0;
}