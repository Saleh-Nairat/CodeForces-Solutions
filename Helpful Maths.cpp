#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;
int main()
{
    string s,result="";
    cin >> s;
    vector<int>nums;
    for(int i=0;i<s.length();i++)
    {
         if(s[i]=='+')
         continue;
         else
         nums.push_back(s[i]-'0');
    }
    sort(nums.begin(),nums.end());
    for(int i=0;i<nums.size();i++)
    {
        result+=to_string(nums[i]);
        if(i==nums.size()-1)
        continue;
        else
        result+='+';
    }
    cout << result << endl;
    return 0;
}