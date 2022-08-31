/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long  ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++) cin >> arr[i];
    long long s = arr[n-1];
    long long sln = arr[n-1];
    for (long long i = n-2; i >= 0; i--) {
        if (s > arr[i]) {
            s = arr[i];
            sln+=arr[i];
        } else {
            if (s!=0)
            s = s-1;
            sln+=s;
        }
    }
    cout << sln << endl;
    return 0;
}