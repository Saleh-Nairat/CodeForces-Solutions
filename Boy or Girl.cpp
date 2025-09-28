#include <bits/stdc++.h>
using namespace std;
bool isdistinct(string name,char c,int index)
{
    for(int i=0;i<index;i++)
    {
        if(name[i]==c)
        return false;
    }
    return true;
}
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int counter=0;
    string name;
    cin >> name;
    for(int i=0;i<name.length();i++)
    {
        if(isdistinct(name,name[i],i))
        counter++;
    }
    if(counter%2)
    cout << "IGNORE HIM!\n";
    else
    cout << "CHAT WITH HER!\n";
    return 0;
}