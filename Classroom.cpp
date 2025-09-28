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
        int n,m;
        cin >> n >> m;
        unordered_set<ll> st;
        for(int i=0;i<n;i++)
        {
            ll num;
            cin >> num;
            st.insert(num);
        }
        for(int i=0;i<m;i++)
        {
            ll num;
            cin >> num;
            if(st.count(num))
                cout << "YES" << en;
            else
                cout << "NO" << en;
                st.insert(num);
        }
    }
    return 0;
}