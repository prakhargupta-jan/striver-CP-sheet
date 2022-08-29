/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int sln = 1, curr = 1;
    int n;
    cin >> n;
    int arr[n];
    cin >> arr[0];
    int prev = arr[0];
    for (int i = 1; i < n; i++) {
        cin >> arr[i];
        if (arr[i] > prev) {
            curr++;
        } else {
            curr = 1;
        }
        prev = arr[i];
        sln = max(curr, sln);
    }
    cout << sln << endl;

    

    return 0;
}