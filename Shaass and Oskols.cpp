#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m;
    cin >> n;
    vector<int> nums(n+1);
    for(int i=1;i<n+1;i++)
    {
        cin >> nums[i];
    }
    cin >> m;
    for(int i=1;i<=m;i++)
    {
        int x,y;
        cin >> x >> y;
        if(x==1)
        {
        nums[x+1]+=(nums[x]-y);
        nums[x]=0;
        }
        else if(x==nums.size()-1)
        {
        nums[x-1]+=y-1;
        nums[x]=0;
        }
        else
        {
            nums[x+1]+=(nums[x]-y);
            nums[x-1]+=y-1;
            nums[x]=0;
        }
    }
    for(int i=1;i<n+1;i++)
    {
        cout << nums.at(i) << endl;
    }
    return 0;
}