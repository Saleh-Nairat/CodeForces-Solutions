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


    int t;
    cin >> t;
    while(t--)
    {
        int n,k1,k2;
        cin >> n >> k1 >> k2;
        vector<int> nums1(k1),nums2(k2);
        for(int i=0;i<k1;i++)
            cin >> nums1[i];
        for(int j=0;j<k2;j++)
            cin >> nums2[j];
        while(k1>0&&k2>0)
        {
            if(*max_element(nums1.begin(),nums1.end())>*max_element(nums2.begin(),nums2.end()))
            {
                k1+=2;
                k2-=2;
                nums1.push_back(*max_element(nums2.begin(),nums2.end()));
            }
            else
            {
                k2+=2;
                k1-=2;
                nums2.push_back(*max_element(nums1.begin(),nums1.end()));
            }
        }
        if(k1>k2)
            cout << "YES" << en;
        else
            cout << "NO" << en;
    }
    return 0;
}