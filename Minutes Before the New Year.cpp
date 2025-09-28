#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int h,m,result=0,i=0;
        cin >> h >> m;
        while(h!=24)
        {
            result+=(i++==0?60-m:60);
            h++;
        }
        cout << result << en;
    }
    return 0;
}