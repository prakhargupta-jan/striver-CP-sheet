/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[2*n];
        for (int i = 0; i < 2*n; i++) cin >> arr[i];
        sort(arr, arr+2*n);
        cout << arr[n]-arr[n-1] << endl;
    }
    

    return 0;
}