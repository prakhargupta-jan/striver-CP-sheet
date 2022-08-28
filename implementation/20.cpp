/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, n;
        cin >> a >> b >> n;
        int sln=0;
        while (a <= n and b <= n)
        {
            if (a > b)
                b+=a;
            else 
                a+=b;
            sln++;
        }
        cout << sln << endl;
    }
    

    return 0;
}