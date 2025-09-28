#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n,oddindex,evenindex,odds=0,evens=0;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
    {
    cin >> nums[i];
    if(nums[i]%2)
    {
    oddindex=i;
    odds++;
    }
    else
    {
    evenindex=i;
    evens++;
    }
    }
    if(evens==1)
    {
        cout << evenindex+1 << endl;
    }
    else
    {
        cout << oddindex+1 << endl;
    }
    return 0;
}