#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc ll t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 



    tc
    {
        int n,a=0,b=0;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        {
            cin >> nums[i];
            if(nums[i]%2)a++;
            else b++;
        }
        if(a%2==0&&b%2==0)
        yes
        else if(b%2==1&&a%2==0&&a>0)
        yes
        else
        no
    }
    return 0;
}
