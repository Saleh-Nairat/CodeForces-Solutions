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
        string s,first,second;
        cin >> s;
        int size=s.length();
        if(size%2)
        cout << "NO" << en;
        else
        {
            for(int i=0;i<=size/2-1;i++)
            {
                first+=s[i];
            }
            for(int i=size/2;i<size;i++)
            {
                second+=s[i];
            }
            cout << (first==second?"YES":"NO") << en;
        }
    }
    return 0;
}