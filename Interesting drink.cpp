#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;

    v prices(n);

    for(auto &e : prices)
        cin >> e;

    int q;
    cin >> q;

    v days(q);

    for(auto &e : days)
        cin >> e;

    sort(prices.begin(),prices.end());

    for(auto e : days)
    {
        cout << upper_bound(prices.begin(),prices.end(),e)-prices.begin() << en;
    }
    return  0;
}


/*
                         binary search solution

#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
#define v vector<int>
#define vl vector<ll>

int Binary_Search(vector<int> nums,int target)
{
    int left=0,right=nums.size()-1,result=-1;

    while(left<=right)
    {
        int mid=left + (right-left) / 2;

        if(nums[mid]<=target)
        {
            result=mid+1;
            left=mid+1;
        }
        else
        {
            right=mid-1;
        }
    }
    return result;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;

    v prices(n);

    for(auto &e : prices)
        cin >> e;

    int q;
    cin >> q;

    v days(q);

    for(auto &e : days)
        cin >> e;

    sort(prices.begin(),prices.end());

    for(auto e : days)
    {
        int result=Binary_Search(prices,e);
        cout << (result==-1?0:result) << en;
    }
    return  0;
}

*/