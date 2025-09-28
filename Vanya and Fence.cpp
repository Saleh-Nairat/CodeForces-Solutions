#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,h;
    cin >> n >> h;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    cin >> nums[i];
    int result=0;
    for(int i=0;i<n;i++)
    {
        if(nums[i]<=h)
        result+=1;
        else
        result+=2;
    }
    cout << result << endl;
    return 0;
}