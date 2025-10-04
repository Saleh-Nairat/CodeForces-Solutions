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
        int n,result=0; cin >> n;

        unordered_set<int> st;

        for(int i=0;i<n;i++) {int e;cin >> e;st.insert(e);}

        result=st.size()*2;
        cout << --result << en;
    }

    return  0;
}
