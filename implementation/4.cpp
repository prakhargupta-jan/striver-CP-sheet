/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int friends, bottles, bottleCap, limes, slices, salt, reqCap, reqSalt;
    cin >> friends >> bottles >> bottleCap >> limes >> slices >> salt >> reqCap >> reqSalt;
    int totCap = bottleCap * bottles;
    cout << min(totCap/reqCap, min(limes*slices, salt/reqSalt))/friends << endl;
    return 0;
}