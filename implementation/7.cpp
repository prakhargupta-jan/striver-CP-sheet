/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int x, y;
    cin >> x >> y;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            if (i&1) {
                if (j == y-1 and i%4 == 1)
                    cout << '#';
                else if (j == 0 and i%4 == 3)
                    cout << '#';
                else
                    cout << '.';
            } else
                cout << '#';
        }
        cout << endl;
    }

    return 0;
}