#include<iostream>

using namespace std;

int main(void)
{
    
      /*宣告*/
      int N[15000];
      int n=0;
      char tmp;
      int max = 0;
      int sum = 0;
      /*I/O*/
      while(cin>>tmp,tmp != 'x')
      {
           cin.putback(tmp);
           cin>>N[n++];
      }
      
      /*
       sum計算當前總和
       max記最大連續總和
       子陣列包含空集合﹐所以若全部為負,max=0
      */
      for(int i=0 ; i<n ; i++)
      {
         sum += N[i];
         if(sum < 0) sum = 0;            //如果總和變成負的代表目前連續子陣列斷掉,         sum從重計算
         else if(sum > max) max = sum;   //更新目前最大子陣列總和
      }

      cout<<max<<endl;


}
