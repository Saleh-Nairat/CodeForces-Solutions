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
        char arr[8][8];
        for(int i=0;i<8;i++)
        for(int j=0;j<8;j++)
        cin >> arr[i][j];
        for(int i=1;i<7;i++)
        {
            for(int j=1;j<7;j++)
            {
                if(arr[i+1][j+1]=='#')
                if(arr[i+1][j-1]=='#')
                if(arr[i-1][j+1]=='#')
                if(arr[i-1][j-1]=='#')
                {
                    cout << i+1 << " " << j+1 << en;
                    break;
                }
            }
        }
    }
    return 0;
}