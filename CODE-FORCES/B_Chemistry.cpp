



#include<bits/stdc++.h>
using namespace  std;




int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         int n,k;
     cin>>n>>k;
     string str;
     cin>>str;


      map<char,int>mymap;

       
      for(int i=0;i<n;i++)
      {
        mymap[str[i]]++;
      }


      for (auto it:mymap)
      {
         if(it.second%2==1 && k>0)
         {
             mymap[it.first]--;
            k--;
         }
      }

         
         int odd=0;

       for (auto it:mymap)
      {
         if(it.second%2==1 )
         {
            odd++;
         }
      }

    
      if(odd<=1)
      {
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }


 }


     
     
}