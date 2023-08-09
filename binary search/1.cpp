/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string str;
    cin >> str;
    int b = 0, s = 0, c = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'B') b++;
        else if (str[i] == 'S') s++;
        else c++;
    }
    int nb, ns, nc;
    cin >> nb >> ns >> nc;
    int pb, ps, pc;
    cin >> pb >> ps >> pc;
    int money;
    cin >> money;

    return 0;
}