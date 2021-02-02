#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)
#define rfo(i, n) for (ll i = n - 1; i >= 0; i--)

void solve()
{
    ll n;
    cin >> n;
    if (n < 4 && n > 1)
        cout << "NO SOLUTION";
    else
    {
        fo(i, n)
        {
            if ((i + 1) % 2 == 0)
                cout << i + 1 << " ";
        }
        fo(i, n)
        {
            if ((i + 1) % 2 == 1)
                cout << i + 1 << " ";
        }
    }
}

int main()
{
    int t = 1;
    // cin >> t;
    while (t--)
        solve();
}