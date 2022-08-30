/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int arr[7];
    int sm = 0;
    for (int i = 0; i < 7; i++) {
        cin >> arr[i];
        sm+= arr[i];
    }
    n = n%sm;
    if (n == 0) {
        int i = 6;
        while (arr[i] == 0)
            i--;
        cout << i+1 << endl;
        return 0;
    }
    for (int i = 0; i < 7; i++) {
        if (n - arr[i] <= 0) {
            cout << i + 1 << endl;
            break;
        }
        n-=arr[i];
    }

    return 0;
}