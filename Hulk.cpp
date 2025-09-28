#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    string result="";
    for(int i=1;i<=n;i++)
    {
        if(i%2)
        {
            result+="I hate ";
            if(i==n)
            result+="it";
            else
            result+="that ";
        }
        else
        {
            result+="I love ";
            if(i==n)
            result+="it";
            else
            result+="that ";
        }
    }
    cout << result << endl;
    return  0;
}