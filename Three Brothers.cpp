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
 


    int a,b;
    unordered_set<int> st;
    cin >> a >> b;
    st.insert(a);st.insert(b);
    if(!st.count(1))cout << 1 << en;
    else if(!st.count(2))cout << 2 << en;
    else cout << 3 << en;
    return 0;
}
