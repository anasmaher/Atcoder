#pragma GCC optimize("Ofast")
#pragma GCC target("sse2")
#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

    int n; cin >> n;
    vector<ll>v(n);
    for(int i=0 ;i < n ;i++) cin >> v[i];

    int q; cin >> q;
    ll z,k,x;
    while(q--)
    {
        cin >> z >> k;
        if(z==1)
        {
            cin>> x;
            v[k-1]=x;
        }
        else
        {
            cout << v[k-1] << '\n';
        }
    }
}
