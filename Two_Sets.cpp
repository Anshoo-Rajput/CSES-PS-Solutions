#include <bits/stdc++.h>
using namespace std;
#define ll long long

void solve()
{
    unsigned ll n;
    cin >> n;
    if((n-3)%4==0)
    {
        cout << "YES\n";
        cout << 2 + (n-3)/2 << "\n";
        ll i = 1;
        while(i<=n)
        {
            cout << i++ << " ";
            if(i>n)
            break;
            cout << i++ << " ";
            i+=2;
        }
        cout << "\n";
        i = 3;
        cout << 1 + (n-3)/2 << "\n";
        while(i<=n)
        {
            cout << i++ << " ";
            if(i>n)
            break;
            cout << i++ << " ";
            i+=2;
        }
    }
    else if(n%4==0)
    {
        cout << "YES\n";
        cout << n/2 << "\n" << 1 <<" ";
        ll i = 4;
        while(i<=n)
        {
            cout << i++ << " ";
            if(i>n)
            break;
            cout << i++ << " ";
            i+=2;
        }
        cout << "\n";
        i = 2;
        cout << n/2 << "\n";
        while(i<=n)
        {
            cout << i++ << " ";
            if(i>n)
            break;
            cout << i++ << " ";
            i+=2;
        }
    }
    else
    {
        cout << "NO\n";
    }
}

int main()
{
        solve();
}