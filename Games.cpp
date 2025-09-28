#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n,counter=0;
    cin >> n;
    vector<pair<int,int>> nums;
    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;
        pair<int,int> p(x,y);
        nums.push_back(p);
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            if(nums.at(i).first==nums.at(j).second)
            counter++;
        }
    }
    cout << counter << endl;
    return  0;
}