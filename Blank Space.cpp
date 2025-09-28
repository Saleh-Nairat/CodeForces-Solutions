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
        int n,counter=0,result=0;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                int j=i;
                while(nums[j]==0)
                {
                    counter++;
                    j++;
                    if(j==n)
                    break;
                }
                i=j;
            }
            result=max(result,counter);
            counter=0;
        }
        cout << result << en;
    }
    return 0;
}

/*
                    another solution

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
        int n,counter=0,result=0;
        cin >> n;
        vector<int> nums(n);
        for(int i=0;i<n;i++)
        cin >> nums[i];
        for(int i=0;i<n;i++)
        {
            if(nums[i]==0)
            {
                counter++;
                result=max(result,counter);
            }
            else
            {
                counter=0;
            }
        }
        cout << result << en;
    }
    string s;
    return 0;
}
*/