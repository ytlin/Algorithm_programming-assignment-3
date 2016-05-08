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
      
      int max = 0;
      int sum = 0;
      for(int i=0 ; i<n ; i++)
      {
         sum += N[i];
         if(sum < 0) sum = 0;
         else if(sum > max) max = sum;
      }

      cout<<max<<endl;


}
