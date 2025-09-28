#include <bits/stdc++.h>
using namespace std;
bool IsPalindrome(string s)
{
    int size=s.length();
    for(int i=size-1,j=0;i>=j;i--,j++)
    {
        if(s[i]==s[j])
        continue ;
        else
        return false;
    }
    return true;
}
int main()
{
    string s;
    cin >> s;
    int size=s.length();
    if(!IsPalindrome(s))
    {
    cout << size << endl;
    return 0;
    }
    bool found=true;
    for(int i=1;i<size;i++)
    {
        if(s[0]==s[i])
        continue;
        else
        {
            found=false ;
            break;
        }
    }
    if(found)
    cout <<  0 << endl;
    else
    cout << size-1 << endl;
    return 0;
}