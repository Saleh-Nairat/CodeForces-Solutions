#include <iostream>
#include <vector>
using namespace std;
int main()
{
	bool person=true;
	int n,s=0,dima=0;
	cin >> n;
	vector<int> card(n);
	for(int i=0;i<n;i++)
	{
		cin >> card[i];
	}
	int size=card.size();
	for(int i=size-1,j=0;i>=j;)
	{
		if(person)
		{
			if(card[i]>card[j])
			s+=card[i--];
			else
			s+=card[j++];
		}
		else
		{
		    if(card[i]>card[j])
			dima+=card[i--];
			else
			dima+=card[j++];
		}
		person=!person;
	}
	cout << s << " " << dima << endl;
	return 0;
}