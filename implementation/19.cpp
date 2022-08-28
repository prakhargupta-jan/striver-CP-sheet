/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int ones = 0, twos = 0, threes = 0;
    for (auto i : s) {
        if (i == '1')
            ones++;
        if (i == '2')
            twos++;
        if (i == '3')
            threes++;
    }
    string sln;
    while(ones) {
        if (sln.empty()) {
            sln+='1';
        }
        else
            sln.append("+1");
        ones--;
    }
    while(twos) {
        if (sln.empty()) {
            sln+='2';
        }
        else
            sln.append("+2");
        twos--;
    }
    while(threes) {
        if (sln.empty()) {
            sln+='3';
        }
        else
            sln.append("+3");
        threes--;
    }
    cout << sln << endl;
    return 0;
}