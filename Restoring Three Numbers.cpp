#include <bits/stdc++.h>
using namespace std;
#define en '\n';
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    vector<int> nums(4);
    cin >> nums[0] >> nums[1] >> nums[2] >> nums[3];
    sort(nums.begin(),nums.end());
    cout << nums[3]-nums[2] << " " ;
    cout << nums[3]-nums[1] << " ";
    cout << nums[3]-nums[0] << en;
    return 0;
}
