#include <bits/stdc++.h>
using namespace std;
int main()
{
    int NumberOfCity;
    cin >> NumberOfCity;
    vector<int> Citys(NumberOfCity);
    for(int i=0;i<NumberOfCity;i++)
    {
        cin >> Citys[i];
    }
    for(int i=0;i<NumberOfCity;i++)
    {
        int Minimum=INT_MAX,Maximum=INT_MIN;
        if(i==0)
        {
            Minimum=abs(Citys[i]-Citys[i+1]);
            Maximum=abs(Citys[i]-Citys[NumberOfCity-1]);
        }
        else if(i==NumberOfCity-1)
        {
            Minimum=abs(Citys[NumberOfCity-1]-Citys[NumberOfCity-2]);
            Maximum=abs(Citys[NumberOfCity-1]-Citys[0]);
        }
        else
        {
            Minimum=min(abs(Citys[i]-Citys[i-1]),abs(Citys[i]-Citys[i+1]));
            Maximum=max(abs(Citys[i]-Citys[0]),abs(Citys[i]-Citys[NumberOfCity-1]));
        }
        cout << Minimum << " " << Maximum << endl;
    }
    return 0;
}