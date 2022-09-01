/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>
// Pending
typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);
    int x, y;
    cin >> x >> y;
    int arr[x][y] = {0};
    int sln[x][y] = {0};
    int rows[x] = {0};
    int cols[y] = {0};
    int checkAllZerosInput = 0;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++){
            cin >> arr[i][j];
            sln[i][j] = 0;
            checkAllZerosInput |= arr[i][j];
        }
    }
    if (checkAllZerosInput == 0) {
        cout << "NO" << endl;
        return 0;
    }
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // cout << sln[i][j] << ' ';
            if (arr[i][j] == 1)
            {
                rows[i]++;
                cols[j]++;
            }
        }
        // cout << endl;
    }
    // cout << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // cout << rows[i] << ' ' << cols[j] << endl;
            if (arr[i][j])
            {
                if (rows[i] == y and cols[j] == x)
                {
                    // cout << "i " << i << " j " << j << " " << rows[i] << ' ' << cols[j] << endl;
                    sln[i][j] = 1;
                }
                else
                {
                    sln[i][j] = 0;
                }
                if ((rows[i] == y and cols[j] == 0) || (rows[i] == 0 and cols[j] == x))
                    continue;
                if (rows[i] != y and cols[j] != x)
                {
                    // cout << "i " << i << " j " << j << " " << rows[i] << ' ' << cols[j] << endl;
                    ;
                    cout << "NO" << endl;
                    return 0;
                }
            }
        }
    }
    int allZeros = 0;
    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            allZeros |= sln[i][j];
        }
    }
    if (allZeros == 0) {
        cout << "NO" << endl;
        return 0;
    }
    cout << "YES" << endl;
    for (int i = 0; i < x; i++)
    {
        for (int j = 0; j < y; j++)
        {
            // cout << "i " << i << ", j " << j << " : " << sln[i][j] << endl;
            if (sln[i][j])
            {
                cout << 1 << ' ';
            }
            else
            {
                cout << 0 << ' ';
            }
        }
        cout << endl;
    }
    return 0;
}