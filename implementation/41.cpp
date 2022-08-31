/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, x, y;
    cin >> n >> x >> y;
    int arr[n];
    for (int i = 0; i < n; i++){
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++) {
        bool check1 = true, check2 = true;
        // cout << "hup" << endl;
        for (int j = max(0, i-x); j < i; j++) {
            // cout << arr[j] << '<' << arr[i] << endl;
            if (arr[j] < arr[i]) {
                check1 = false;
                break;
            }
        }
        // cout << "bup" << endl;
        for (int j = i+1; j <= min(i+y, n-1); j++) {
            // cout << arr[j] << '<' << arr[i] << endl;
            if (arr[j] < arr[i]) {
                check2 = false;
                break;
            }
        }
        if (check1 == true and check2 == true) {
            cout << i+1 << endl;
            break;
        }
    }


    return 0;
}