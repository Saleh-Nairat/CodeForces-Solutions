#include <iostream>
using namespace std;
int main()
{
	int a,b,steps=0;
	cin  >> a >> b;
	while(a<=b)
	{
	    a*=3;
	    b*=2;
	    steps++;
	}
	cout << steps << endl;
	return 0;
}