/*                 Prakhar is a Free Soul                      */
#include <bits/stdc++.h>

typedef long long int ll;
using namespace std;

int main()
{
    ios::sync_with_stdio(0);cin.tie(0);
    int n;
    cin >> n;
    string s;
    cin >> s;
    int arr[26] = {0};
    for (int i = 0; i < s.length(); i++) {
        arr[s[i] - 'a']++;
    }
    for (int i = 0; i < 26; i++) {
        if (arr[i]%n) {
            cout << -1 << endl;
            return 0;
        }
        arr[i] = arr[i]/n;
    }
    string p;
    for (int i = 0; i < 26; i++) {
        while(arr[i]) {
            p+='a'+i;
            arr[i]--;
        }
    }
    string sln;
    for (int i = 0; i < n; i++) {
        sln+=p;
    }
    cout << sln << endl;
    return 0;
}