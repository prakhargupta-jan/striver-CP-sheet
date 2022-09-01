/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

bool comparator(pair<int, int> x, pair<int, int> y) {
    return x.first < y.first;
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n, k;
    cin >> n >> k;
    vector<pair<int, int>> arr(n, pair<int, int>{});
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        arr[i].first = x;
        arr[i].second = i;
    }
    sort(arr.begin(), arr.end(), comparator);
    int s = 0;
    vector<int> sln;
    for (int i = 0; i < n; i++) {
        if (k >= arr[i].first) {
            sln.push_back(arr[i].second);
            k-=arr[i].first;
            s++;
        } else {
            break;
        }
    }

    cout << s << endl;
    for (auto i : sln) {
        cout << i+1 << ' ';
    }

    return 0;
}