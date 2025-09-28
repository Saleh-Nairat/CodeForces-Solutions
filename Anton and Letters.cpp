#include <bits/stdc++.h>
using namespace std;
bool isdis(string s,int index,char c)
{
    for(int i=0;i<index;i++)
    {
        if(s[i]==c)
        return false;
    }
    return true;
}
int main()
{
    string s;
    getline(cin,s);
    int counter=0;
    for(int i=1;i<s.length()-1;i++)
    {
        if(s[i]==','||s[i]==' ')
        continue;
        else if(isdis(s,i,s[i]))
        counter++;
    }
    cout << counter << endl;
    return  0;
}