#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int n;
	cin >> n;
	int p[n];
	for(int i=0;i<n;i++)
    {
    	cin >> p[i];
    }
    for(int i=1;i<=n;i++)
    {
    	int j=0;
    	while(p[j++]!=i)
    	{
	    	continue;
	    }
	    cout << j << " ";
    }
    cout << endl;
	return 0;
}