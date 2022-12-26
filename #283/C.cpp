#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;
 
int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
 
    string s; cin >> s;
    ll res=0;
    for(int i=0 ; i<s.size() ; i++)
    {
        if(s[i]=='0' && s[i+1]=='0') i++; res++;
    }
    cout << res << '\n';
}
