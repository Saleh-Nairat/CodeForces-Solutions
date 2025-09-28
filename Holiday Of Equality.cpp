#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    sort(nums.begin(),nums.end());
    int result=0,size=nums.size();
    for(int i=0;i<size-1;i++)
    {
        result+=nums.at(size-1)-nums.at(i);
    }
    cout << result << en;
    return 0;
}

/*
                    another solution 
     
#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);



    int n;
    cin >> n;
    multiset<int> st;
    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;
        st.insert(x);
    }
    int result=0,maxvalue=*st.rbegin();
    for(auto value:st)
    {
        result+=maxvalue-value;
    }
    cout << result << en;
    return 0;
}

*/