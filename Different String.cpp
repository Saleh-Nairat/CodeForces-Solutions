#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
pair<int,int> bs(int year)
{
    int left=0,right=9999;
    while(left<=right)
    {
        int mid=left+(right-left)/2;
        int temp=left+right;
        pair<int,int> p(left,right);
        if(temp*temp==year)
        return p;
        else if(temp*temp<year)
        left=mid+1;
        else
        right=mid-1;
    }
    return {-1,-1};
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        string s;
        cin >> s;
        int temp=count(s.begin(),s.end(),s[0]);
        if(temp==s.length())
        no
        else
        {
            for(int i=1;i<s.length()-1;i++)
            {
                if(s[i]!=s[i-1])
                {
                    swap(s[i],s[i-1]);
                    break;
                }
                else if(s[i]!=s[i+1])
                {
                    swap(s[i],s[i+1]);
                    break;
                }
            }
            if(s.length()==2)
            {
                yes
                cout << s[1] << s[0] << en;
            }
            else
        {
             yes
            cout << s << en;
        }
        }
    }
    return 0;
}
