#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define tc int t;cin>>t;while(t--)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    int n,k,counter=0;
    cin >> n >> k;
    multiset<int> st;
    for(int i=0;i<n;i++)
    {
        int person;
        cin >> person;
        st.insert(person);
    }
    for(auto person : st)
    {
        person+=k;
        if(person<=5)
        counter++;
    }
    cout << counter/3 << en;
    return 0;
}
