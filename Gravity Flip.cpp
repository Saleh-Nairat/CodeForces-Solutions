#include <bits/stdc++.h>
using namespace std;
int main()
{
int n;
cin >> n;
vector<int> nums(n);
for(int i=0;i<n;i++)
{
cin >> nums[i];
}
sort(nums.begin(),nums.end());
for(auto i:nums)
{
cout << i << endl;
}
return 0;
}

