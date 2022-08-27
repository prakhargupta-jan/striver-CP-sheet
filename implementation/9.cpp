/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    int arr[n];
    int mxPos, mnPos, mx = INT_MIN, mn = INT_MAX;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
        
        if (arr[i] < mn) {
            mn = arr[i];
            mnPos = i;
        }
    }
    for (int i = n-1; i >= 0; i--) {
        if (arr[i] > mx) {
            mx = arr[i];
            mxPos = i;
        }
    }
    if (mxPos > mnPos) { 
        cout << mxPos - 0 + n-1 - mnPos << endl;
    } else {
        cout << mxPos - 0 + n-1 - mnPos - 1 << endl;
    }
    

    return 0;
}