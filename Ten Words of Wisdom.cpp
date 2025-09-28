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
        int n,result=0,maximumvalue=0;
        cin >> n;
        for(int i=0;i<n;i++)
        {
            int a,b;
            cin >> a >> b;
            if(a<=10&&b>maximumvalue)
            {
                result=i+1;
                maximumvalue=b;
            }
        }
        cout << result << en;
    }
    return 0;
}
