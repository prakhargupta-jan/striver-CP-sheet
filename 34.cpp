/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j < n-i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i;  j > 0; j--) {
            if (j == 1) {
                cout << j-1;
                break;
            }
            cout << j-1 << " ";
        }
        cout << endl;
    }
    for (int i = n-1; i >= 0; i--) {
        for (int j = 0; j < n-i; j++) {
            cout << "  ";
        }
        for (int j = 0; j <= i; j++) {
            cout << j << " ";
        }
        for (int j = i;  j > 0; j--) {
            if (j == 1) {
                cout << j-1;
                break;
            }
            cout << j-1 << " ";
        }
        cout << endl;
    }

    return 0;
}