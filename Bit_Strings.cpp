#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void solve()
{
    int n;
    cin >> n;
    long long ans = 1;
    for(int i=0;i<n;i++)
    {
        ans= (ans*2)%mod;
    }
    cout << ans;
}

int main()
{
        solve();
}