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
        int first=0,last=0,c=0,result=0;
        string s;
        cin >> s;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1')
            {
                if(c==0)
                {
                    first=i;
                    c++;
                }
                else
                    last=i;
            }
        }
        for(int i=first;i<last;i++)
        {
            if(s[i]=='0')
                result++;
        }
        if(s.length()<=2)
            cout << 0 << en;
        else
        {
            cout << result << en;
        }
            
    }
    return 0;
}