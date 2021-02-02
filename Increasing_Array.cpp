#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    ll a[n];
    ll ans = 0;
    fo(i, n)
    {
        cin >> a[i];
        if (i > 0 && a[i] < a[i - 1])
        {
            ans += a[i - 1] - a[i];
            a[i] = a[i - 1];
        }
    }
    cout << ans;
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}