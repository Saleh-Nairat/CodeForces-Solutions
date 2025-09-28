#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n, m;
        long long x, y;
        cin >> n >> m >> x >> y;

        vl a(n), b(m);
        for (int i = 0; i < n; i++)
         cin >> a[i]; 
        for (int i = 0; i < m; i++)
         cin >> b[i]; 
        int h = lower_bound(a.begin(), a.end(), y) - a.begin();
        int ver  = lower_bound(b.begin(), b.end(), x) - b.begin();
        int total1 = h + ver;
        int h2 = lower_bound(a.begin(), a.end(), y) - a.begin();
        int ver2  = lower_bound(b.begin(), b.end(), x) - b.begin();
        int total2 = h2 + ver2;

        int result = min(total1, total2) + 1;

        cout << result-1 << en;
    }
    return 0;
    }

