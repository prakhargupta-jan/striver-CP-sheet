/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    int arr[k+1] = {0};
    int x;
    for (int i = 0; i < n; i++) {
        cin >> x;
        arr[x]++;
    }
    x = 0;
    for (int i = 0; i < k+1; i++) {
        x+=(arr[i]&1);
    }
    cout << (x&1 ? n-(x-1)/2 : n-x/2) << endl;
    return 0;
}