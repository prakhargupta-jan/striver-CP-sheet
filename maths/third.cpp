/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    // 1 = M
    // 2 -> 0 = E
    // 3 -> 1 -> 0 = M
    // 4 -> 0 = E
    // 5 -> 1 -> 0 = M
    // 6 -> 0 = E
    int n;
    cin >> n;
    cout << (n&1 ? "Ehab" : "Mahmoud") << endl; 

    return 0;
}