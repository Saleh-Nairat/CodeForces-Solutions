#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    
    
    long long result=0;
    vector<int> nums(4);
    for(int i=0;i<4;i++)
    cin >> nums[i];
    string s;
    cin >> s;
    for(int i=0;i<s.length();++i)
    {
        result+=nums[s[i]-'0'-1];
    }
    cout << result << en;
    return 0;
}