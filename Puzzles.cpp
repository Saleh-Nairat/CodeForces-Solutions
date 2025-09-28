#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,m,maxnumber=INT_MIN,minnumber=INT_MAX,def,mindef=INT_MAX;
    cin >> n >> m;
    vector<int> nums(m);
    if(n>m)
    {
        cout << 0 << endl;
        return 0;
    }
    for(int i=0;i<m;i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<=m-n;i++)
    {
        maxnumber=INT_MIN,minnumber=INT_MAX;
        for(int j=i,c=0;c<n;j++,c++)
        {
            maxnumber=max(maxnumber,nums[j]);
            minnumber=min(minnumber,nums[j]);
        }
        def=maxnumber-minnumber;
        mindef=min(mindef,def);
    }
    cout << mindef << endl;
    return 0;
}