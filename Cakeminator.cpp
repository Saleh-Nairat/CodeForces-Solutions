#include <iostream>
using namespace std;
int main()
{
	bool s=true;
	int r,c,eat=0,ce=0,k;
	cin >> r >> c;
	char cake[r][c];
	for(int i=0;i<r;i++)
	for(int j=0;j<c;j++)
	cin >> cake[i][j];
	for(int i=0;i<r;i++)
	{
	    k=0,s=true;
		while(k<c)
		{
			if(cake[i][k++]=='S')
			s=false;
		}
		if(s)
		{
			eat+=c;
			ce++;
		}
	}
		for(int i=0;i<c;i++)
	{
		k=0,s=true;
		while(k<r)
		{
			if(cake[k++][i]=='S')
			s=false;
		}
		if(s)
		{
			if(ce)
			{
				eat+=r-ce;
			}
			else
			eat+=r;
		}
	}
		cout << eat << endl;
	return 0;
}