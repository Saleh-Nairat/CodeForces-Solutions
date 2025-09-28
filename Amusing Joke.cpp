#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    bool test=true;
    string s1,s2,s3;
    cin >> s1 >> s2 >> s3;
    string name=s1+s2;
    multiset<char> st;
    for(int i=0;i<s3.length();i++)
    {
        st.insert(s3[i]);
    }
    for(int i=0;i<name.length();i++)
    {
        auto it=st.find(name[i]);
        if(it==st.end())
        {
            test=false;
            break;
        }
        st.erase(it);
    }
    if(test&&st.empty())
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}
