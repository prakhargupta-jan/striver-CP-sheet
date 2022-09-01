/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int hrs(string t) {
    return (t[0]-'0')*10 + (t[1]-'0');
}

int mns(string t) {
    return (t[3]-'0')*10 + (t[4]-'0');
}

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string t1, t2;
    cin >> t1 >> t2;
    int h1 = hrs(t1), h2 = hrs(t2), m1 = mns(t1), m2= mns(t2);
    // cout << h1 << ' ' << h2 << ' ' << m1 << ' ' << m2 << endl;
    int diff = ((h2-h1)*60 + m2-m1)/2;
    int slnh = h1 + diff/60;
    int slnm = m1 + diff%60;
    slnh += slnm/60;
    slnm = slnm%60;
    // cout << diff << ' ' << slnh << ' ' << slnm << endl;
    if (slnh < 10) {
        cout << '0' << slnh << ':';
    } else {
        cout << slnh << ':';
    }
    if (slnm < 10) {
        cout << '0' << slnm << endl;
    } else {
        cout << slnm << endl;
    }
    return 0;
}