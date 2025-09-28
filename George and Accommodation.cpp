#include <iostream>
using namespace std;
int main()
{
	int n,counter=0;
	cin >> n;
	while(n--)
	{
		int q,p;
		cin >> p >> q;
		if(p+2<=q)
		counter++;
	}
	cout << counter << endl; 
	return 0;
}