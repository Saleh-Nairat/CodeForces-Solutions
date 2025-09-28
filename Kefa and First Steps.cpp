#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int n;
    cin >> n;
    vector<long long> nums(n);
    for(int i=0;i<n;i++)
    {
        cin >> nums[i];
    }
    int counter=1,tempcounter=1;
    for(int i=0;i<n-1;i++)
    {
        if(nums[i]<=nums[i+1])
        {
            tempcounter++;
        }
        else
        {
            tempcounter=1;
        }
        counter=max(counter,tempcounter);
    }
    cout << counter << endl;

    return 0;
}