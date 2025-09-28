#include <bits/stdc++.h>
using namespace std;
#define en '\n'
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);


    int size,t;
    cin >> size >> t;
    vector<char> children(size);
    for(int i=0;i<size;i++)
    cin >> children[i];
    for(int i=0;i<t;i++)
    {
        for(int j=0;j<size;j++)
        if(children[j]=='B' && children[j+1]=='G')
        {
        swap(children[j],children[j+1]);
        j++;
        }
    }
    for(auto child : children)
    cout << child;
    cout << en;
    return 0;
}