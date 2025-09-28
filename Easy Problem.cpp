#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
bool ispal(string s)
{
    string temp=s;
    reverse(temp.begin(),temp.end());
    return temp==s;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 


    
    tc
    {
        int n,result=0;
        cin >> n;
        for(int i=0;i<=n;i++)
        {
            for(int j=0;j<=n;j++)
            if(i+j==n)
            result++;
        }
        result-=2;
        cout << result << en;
    }
    return 0;
}
