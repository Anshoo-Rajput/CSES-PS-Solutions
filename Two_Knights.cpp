#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    unsigned ll n;
    cin >> n;
    for(unsigned long long i=1;i<=n;i++)
    {
        unsigned long long ans = (i*i*i*i)/2 - 9*(i*i)/2 + 12*(i) - 8;
        cout << ans <<"\n";
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}