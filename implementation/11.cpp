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
    int sln[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
        sln[arr[i]-1] = i+1;
    }
    for (int i = 0; i < n; i++) cout << sln[i] << " ";

    return 0;
}