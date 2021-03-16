#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007
 
void solve()
{
    int n;
    cin >> n;
    int ans=0;
    for (int i = 5; n / i >= 1; i *= 5)
        ans += n / i;
    cout << ans;
}
 
int main()
{
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}