#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int t;
    cin >> t;
    while(t--)
    {
        bool test=true;
        int n;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-1;i++)
        {
            if(abs(nums[i+1]-nums[i])>1)
            {
                test=false;
                break;
            }
        }
        if(test)
        cout << "YES\n";
        else
        cout << "NO\n";
    }
    return 0;
}
