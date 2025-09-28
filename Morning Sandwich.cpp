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
        int b,c,h,result=0;
        cin >> b >> c >> h;
        b-=2;
        h--;
        result+=3;
        while(b>0)
        {
            if(c)
            c--;
            else if(h)
            h--;
            else
            break;
            b--;
            result+=2;
        }
        cout << result << en;
    }
    return 0;
}