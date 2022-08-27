/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int arr[5][5];
    int x, y;
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];
            if(arr[i][j] == 1) {
                x = i;
                y = j;
            }
        }
    }
    cout << abs(2-x) + abs(2-y) << endl;
    return 0;
}