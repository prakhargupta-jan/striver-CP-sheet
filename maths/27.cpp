/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// https://codeforces.com/problemset/problem/1260/A     Heating
// Accepted

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        int rad, sec;
        cin >> rad >> sec; 
        if (sec < rad) {
            cout << sec << endl;
            continue;
        }
        float x = (float)sec / rad;
        cout << fixed << setprecision(0)<< (rad-sec%rad)*floor(x)*floor(x) + (sec%rad)*ceil(x)*ceil(x) << endl;
        
    }

    return 0;
}