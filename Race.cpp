#include <iostream>
using namespace std;
int main()
{
   int t;
   bool found=false;
   cin >> t;
   for(int i=1;i<=t;i++)
   {
      found=false;
      int a,x,y;
      cin >> a >> x >> y;
      for(int j=1;j<=100;j++)
      {
          if(j==a) 
          continue;
          else
          if(abs(j-x)<abs(a-x)&&abs(j-y)<abs(a-y))
          {
              found=true;
          }
      }
      if(found)
      cout << "Yes" << endl;
      else
      cout << "NO" << endl;
   }
   return 0;
}
