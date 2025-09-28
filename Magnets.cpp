#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int testCases,result=1;
    cin >> testCases;
    vector<string> magnets(testCases);
    cin >> magnets[0];
    for(int i=1;i<testCases;i++)
    {
        cin >> magnets[i];
        if(magnets[i-1]=="10" && magnets[i]=="01" || magnets[i-1]=="01" && magnets[i]=="10")
        result++;
    }
    cout << result << endl;
    return 0;
}