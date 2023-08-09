/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int arr[4];
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
        int evCount = 0;
        for (int i = 0; i < 4; i++) {
            if (arr[i]%2 == 0) evCount++;
        }
        if (arr[0] == 0 || arr[1] == 0 || arr[2] == 0) {
            if (evCount >= 3) cout << "Yes" << endl;
            else cout << "No" << endl;
            continue;
        }
        if (evCount == 2) cout << "No" << endl;
        else cout << "Yes" << endl; 
    }

    return 0;
}