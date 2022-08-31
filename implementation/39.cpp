/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    string s;
    cin >> s;
    int lw = 0;
    for (auto i : s){
        if (i >= 'a' and i <= 'z')
            lw++;
    }
    if (lw == 0 or (lw == 1 and (s[0] >= 'a' and s[0] <= 'z'))) {
        for (int i =0; i < s.length(); i++){
            if (s[i] >= 'a' and s[i] <= 'z')
                s[i] = s[i]-'a'+'A';
            else 
            {
                s[i] = (char)(s[i] + 'a' - 'A');
            }
        }
    }
    cout << s << endl;
    return 0;
}