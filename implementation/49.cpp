/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// Missing cases
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    bool isApplicable[n] = {0};
    for (int i = 0; i < n; i++) cin >> arr[i];
    for (int i = 0; i < n; i++) {
        if (arr[i]&1) {
            isApplicable[i] = true;
        }
        arr[i] = arr[i]/2;
    }
    // for (int i = 0; i < n; i++) cout << isApplicable[i] << ' ';
    // cout << endl << "////////////" << endl;
    int value = 0;
    for (int i = 0; i < n; i++) {
        value+=arr[i];
    }
    // cout << "value "<< value << endl;
    int i = 0;
    while (value) {
        if (!isApplicable[i]) {
            i++;
            continue;
        }
        if (value < 0) {
            if (arr[i] > 0) {
                arr[i]++;
                value++;
            }
        } else {
            if (arr[i] < 0) {
                arr[i]--;
                value--;
            }
        }
        i++;
    }
    for (int i = 0; i < n; i++) cout << arr[i] << endl;
    return 0;
}