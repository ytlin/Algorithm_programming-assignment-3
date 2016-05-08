#include<iostream>

using namespace std;

int main(void)
{
    
      /*宣告*/
      int N[15000];
      int n=0;
      char tmp;
      /*I/O*/
      while(cin>>tmp,tmp != 'x')
      {
           cin.putback(tmp);
           cin>>N[n++];
      }
      for(int i=0;i<n;i++)
      {
            cout<<N[i]<<" ";
      }
}
