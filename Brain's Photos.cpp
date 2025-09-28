#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    bool found=false;
    int n,m;
    cin >> n >> m;
    char arr[n][m];
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        cin >> arr[i][j];
    }
    for(int i=0;i<n;i++)
    for(int j=0;j<m;j++)
    {
        if(arr[i][j]!='W'&&arr[i][j]!='G'&&arr[i][j]!='B')
        {
            found=true;
            break;
        }
    }
    if(found)
    cout << "#Color" << en;
    else
    cout << "#Black&White" << en;
    return 0;
}