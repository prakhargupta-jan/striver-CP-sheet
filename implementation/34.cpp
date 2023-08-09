/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    cout << string(2*n, ' ') << '0' << endl;
    for (int i = 1; i <= n; i++) {
        cout << string(2*(n-i), ' ');
        for (int j = 0; j <= i; j++) cout << j << ' ';
        for (int j = i-1; j >= 0; j--) cout << j << " \n"[j == 0];
    }
    for (int i = n-1; i >= 1; i--) {
        cout << string(2*(n-i), ' ');
        for (int j = 0; j <= i; j++) cout << j << ' ';
        for (int j = i-1; j >= 0; j--) cout << j << " \n"[j ==0];
    }
    cout << string(2*n, ' ') << '0' << endl;


    return 0;
}