#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
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
        int b,p,f,profit=0;
        int h,c;
        cin >> b >> p >> f >> h >> c;
        if(b==1)
        {
            cout << 0 << en;
            continue;
        }
        if(h>c)
        {
            profit+=min(p,b/2)*h;
            b-=p*2;
            if(b>=2)
            profit+=min(f,b/2)*c;
        }
        else
        {
            profit+=min(f,b/2)*c;
            b-=f*2;
            if(b>=2)
            profit+=min(p,b/2)*h;
        }
        cout << profit << en;
    }
    return 0;
}

