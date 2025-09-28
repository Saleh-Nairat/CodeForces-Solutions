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
        bool found=false;
        int n,k;
        cin >> n >> k;
        unordered_set<int> st;
        for(int i=0;i<n;i++)
        {
            int num;
            cin >> num;
            st.insert(num);
        }
        if(st.count(k))
        cout << "YES" << en;
        else
        cout << "NO" << en;
}
    return 0;
}