#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for (ll i = 0; i < n; i++)

void solve()
{
    ll n;
    cin >> n;
    int arr[n];
    fo(i, n - 1)
            cin >> arr[i];

    sort(arr, arr + n - 1);
    bool f = true;
    fo(i, n - 1)
    {
        if (arr[i] != i + 1)
        {
            cout << i + 1;
            f = false;
            break;
        }
    }
    if (f)
        cout << n;
}

int main()
{
    solve();
}