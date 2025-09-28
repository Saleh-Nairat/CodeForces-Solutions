#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int steps=0;
    char center='a';
    string name;
    cin >> name;
    for(unsigned i=0;i<name.length();i++)
    {
        if(abs(center-name[i])<(26-abs(center-name[i])))
        steps+=abs(center-name[i]);
        else
        steps+=(26-abs(center-name[i]));
        center=name[i];
    }
    cout << steps << endl;
    return 0;
}