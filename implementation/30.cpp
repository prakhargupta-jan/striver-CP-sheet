/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// Pending
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << 2 << endl;
        vector<int> heap(n);
        for (int i = 1; i <= n; i++) {
            cin >> heap[i];
        }
        make_heap(heap.begin(), heap.end());
        
    }

    return 0;
}