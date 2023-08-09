/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// Accepted

bool isPowerOf4 (string s) {
    int count0 = 0, count1 = 0;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == '0')
            count0++;
        else
            count1++;
    }
    return (count1 == 1) and (count0%2 == 0);
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string n;
    cin >> n;
    if (n == "0") {
        cout << 0 << endl;
        return 0;
    }
    cout << (isPowerOf4(n) ? (n.length()+1)/2-1 : (n.length()+1)/2) << endl;

    return 0;
}