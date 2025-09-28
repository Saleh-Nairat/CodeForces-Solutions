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
        int x,n,result=0;
        cin >> x >> n;
        for(int i=1;i<=n;i++)
        {
            if(i%2)
            result+=x;
            else
            result+=-x;
        }
        cout << result << en;
    }
    return 0;
    }

