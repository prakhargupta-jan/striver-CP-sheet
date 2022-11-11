/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int arr[4];
    cin >> arr[0] >> arr[1] >> arr[2] >> arr[3];
    int p = max({arr[0], arr[1], arr[2], arr[3]});
    for (int i = 0; i < 4; i++) {
        if (arr[i] == p)
            continue;
        cout << p - arr[i] << ' ';
    }
    cout << endl;

    return 0;
}