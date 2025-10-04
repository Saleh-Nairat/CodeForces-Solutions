#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    tc
    {
        int n,q; cin >> n >> q;

        vi nums(n),pref(n+1,0);

        for(auto &e : nums) {cin >> e;}

        for(int i=1;i<=n;i++) {pref[i]=pref[i-1] + nums[i-1];}

        while(q--)
        {
            int l,r,k,Sum=0; cin >> l >> r >> k;

            Sum=pref[n];
            Sum-=(l!=1?pref[r]-pref[l-1]:pref[r]);
            Sum+=k*(r-l+1);

            cout << (Sum%2?"YES" : "NO") << en;
        }
    }

    return  0;
}
