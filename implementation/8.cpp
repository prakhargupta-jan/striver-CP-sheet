/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int queries;
    cin >> queries;
    int sln = 0;
    while (queries--) 
    {
        string s;
        cin >> s;
        switch (s[0])
        {
        case 'T':
            sln+=4;
            break;
        case 'C':
            sln+=6;
            break;
        case 'O':
            sln+=8;
            break;
        case 'D':
            sln+=12;
            break;
        case 'I':
            sln+=20;
            break;
        default:
            break;
        }
    }
    cout << sln << endl;

    return 0;
}