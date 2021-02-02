#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    ll x, y;
    cin >> x >> y;
    ll ans = 0;
    if (y > x)
    {
        if (y % 2)
            ans = y * y - x + 1;
        else
            ans = (y - 1) * (y - 1) + x;
    }
    else
    {
        if (x % 2)
            ans = (x - 1) * (x - 1) + y;
        else
            ans = x * x - (y - 1);
    }
    cout << ans << "\n";
}

int main()
{
    int t = 1;
    cin >> t;
    // cout << t ;
    while (t--)
        solve();
}