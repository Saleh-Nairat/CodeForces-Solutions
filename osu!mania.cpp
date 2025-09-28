#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int bs(int num,int value)
{
    int l=0,r=num,result=-1;
    while(l<=r)
    {
        int mid=l+(r-l)/2;
        if(mid==value)
        {
            result=mid;
            l=mid+1;
        }
        else if(mid>value)
        {
            r=mid-1;
        }
        else
        {
            l=mid+1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    tc
    {
        vector<int> result;
        int n;
        cin >> n;
        vector<vector<char>> ch(n,vector<char>(4));
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<4;j++)
            cin >> ch[i][j];
        }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            if(ch[i][j]=='#')
            result.push_back(j+1);
        }
    }
            reverse(result.begin(),result.end());
    for(int i=0;i<n;i++)
    cout << result[i] << " ";
    cout << en;
    }
    return 0;
}