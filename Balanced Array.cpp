#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int n;
        cin >> n;
        if(n%4==0)
        {
            cout << "YES" << en;
            int even=2,odd=1,sumeven=0,sumodd=0;
            for(int i=0;i<=n/2-1;i++)
            {
                cout << even << " ";
                sumeven+=even;
                even+=2;
            }
            for(int i=n/2;i<n-1;i++)
            {
                cout << odd << " ";
                sumodd+=odd;
                odd+=2;
            }
            cout << sumeven-sumodd << en;
        }
        else
        {
            cout << "NO" << en;
        }
    }
    return 0;
}