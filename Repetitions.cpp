#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fo(i, n) for(ll i=0;i<n;i++)

void solve()
{
    string arr;
    cin >> arr;
    int n = arr.length();
    int ans=0, temp=1;
    fo(i,n)
    {
        if(i>0 && arr[i]==arr[i-1])
        {
            temp++;
        }
        else
        {
            if(temp>ans)
            ans = temp;
            temp = 1;
        }   
    }
    if(temp>ans)
        ans = temp;
    cout << ans;
}

int main()
{
    int t=1;
    // cin >> t;
    while(t--)
        solve();
}