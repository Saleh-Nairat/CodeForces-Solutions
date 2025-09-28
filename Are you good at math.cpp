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
        int n,md=0,ld=0;
        cin >> n;
        int nums[n][n];
        for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
        {
            cin >> nums[i][j];
            if(i==j)
                md+=nums[i][j];
            if(i+j==n-1)
                ld+=nums[i][j];
        }
        if(md>ld)
            cout << "Left" << en;
        else if(ld>md)
            cout << "Right" << en;
        else
            cout << "Equal" << en;


    }
    return 0;
}