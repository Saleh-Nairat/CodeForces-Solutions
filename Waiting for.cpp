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
 

    int n;cin >> n;int wait=0;
    while(n--)
    {
        char c;int a;
        cin >> c >> a;
        if(c=='P')
        {
            wait+=a;
        }
        else
        {
            if(a<=wait)
            {
            cout << "NO" << en;
            wait-=min(wait,a);
            }
            else
            {
            cout << "YES" << en;
            wait=0;
            }
        }
    }
    return 0;
}