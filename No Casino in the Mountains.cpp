#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define vi vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);





    tc
    {
        int n,k,temp,result=0;
        cin >> n >> k;
        temp=k;

        vi nums(n);

        for(auto &e : nums) {cin >> e;}

        for(int i=0;i<n;i++)
        {
            
            if(nums[i]==0)
            {
                k--;
                if(k==0) {result++;k=temp;i++;}
            }
            
            else
            {
                k=temp;
            }
            
        }
        
        cout << result << en;
    }

    return  0;
}
