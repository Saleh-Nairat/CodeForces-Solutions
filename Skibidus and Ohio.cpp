#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long 
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll> 
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    tc
    {
        int result=0;
        string s;
        cin >> s;
        for(int i=0;i<s.size()-1;i++)
        {
            if(s[i]==s[i+1])
            {
                result+=i+1;
            }
        }
        if(result)
        cout << 1 << en;
        else
        cout << s.size() << en;
    }
    return 0;
}

