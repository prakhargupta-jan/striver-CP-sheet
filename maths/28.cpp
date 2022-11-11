/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

// https://codeforces.com/problemset/problem/1266/A     Competitive Programmer
// Accepted

bool isDivisibleBy2(string x) {
    for (auto i : x) {
        if ((i-'0')%2 == 0)
            return true;
    }
    return false;
}
bool isDivisibleBy3(string x) {
    int sln = 0;
    for (auto i : x) {
        sln += (i-'0');
    }
    return !(sln%3); 
}
string removeZero(string x) {
    string sln;
    bool zeroRemoved = false;
    for (auto i : x) {
        if (!zeroRemoved and i == '0') {
            zeroRemoved = true;
            continue;
        }
        sln+=i;
    }
    if (sln == x)
        return "a";
    return sln;
}
int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    while (n--) {
        string x;
        cin >> x;
        x = removeZero(x);
        if (x[0] == 'a') {
            cout << "cyan" << endl;
            continue;
        }
        if (isDivisibleBy2(x) and isDivisibleBy3(x))
            cout << "red" << endl;
        else
            cout << "cyan" << endl;
    }

    return 0;
}