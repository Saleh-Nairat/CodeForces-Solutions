#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    bool found=false;
    int n,time,minimumtime=INT_MAX;
    cin >> n;
    vector<int> nums;
    vector<char> letter;
    for(int i=0;i<n;i++)
    {
        char c;
        cin >> c;
        letter.push_back(c);
    }
    for(int i=0;i<n;i++)
    {
        int num;
        cin >> num;
        nums.push_back(num);
    }
    for(int i=0;i<n;i++)
    {
        if(letter[i]=='R' && letter[i+1]=='L')
        {
           found=true;
           time=(nums[i+1]-nums[i])/2;
           if(time<minimumtime)
           minimumtime=time;
        }
    }
    if(found)
    cout << minimumtime << endl;
    else
    cout << -1 << endl;
    return 0;
}