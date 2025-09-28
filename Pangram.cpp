#include <bits/stdc++.h>
using namespace std;
bool isdis(string s,int index,char c)
{
    for(int i=0;i<index;i++)
    {
        if(s[i]==c || s[i]==c-32 || s[i]==c+32)
        return false;
    }
    return true;
}
int main()
{
    int n,counter=0;
    string s;
    cin >> n >> s;
    for(int i=0;i<s.length();i++)
    {
        if(isdis(s,i,s[i]))
        counter++;
    }
    if(counter>=26)
    cout << "YES\n";
    else
    cout << "NO\n";
    return 0;
}