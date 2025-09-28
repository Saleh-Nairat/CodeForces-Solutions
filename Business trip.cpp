#include <bits/stdc++.h>
using namespace std;
#define en '\n'
#define ll long long
#define tc int t;cin>>t;while(t--)
#define yes cout << "YES" << en;
#define no cout << "NO" << en;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
 

    int k,result=0,water=0,sum=0;
    cin >> k;
    priority_queue<int> q;
    for(int i=1;i<=12;i++)
    {
        int num;
        cin >> num;
        sum+=num;
        q.push(num);
    }
    if(sum<k)
    {
        cout << -1 << en;
        return 0;
    }
    while(water<k)
    {
        water+=q.top();
        q.pop();
        result++;
    }
    cout << result << en;
    return 0;
}