
#include<bits/stdc++.h>
using namespace  std;





int main()
{
     int t;
     cin>>t;
     while (t--)
     {
         int n;
         string str;
         cin>>n>>str;

         int sum=0;
         int l=str.size()-1;
         int s=str.size()-1;

         
         int  findA=-1;
         int  findB=-1;
         bool increase=false;

         while(s>=0)
         {
           
             if(str[s]=='B' && findB ==-1 )
             {
                 findB=s;
             }

             if(str[s]=='A' && findB!=-1)
             {
                 if(sum!=0) sum++;
                 
                 sum=sum+(findB-s);
                 findB=-1;
             }else if(str[s]=='A' && sum!=0){
                  sum=sum+1;
             }



          s--;
              
         }

         cout<<sum<<endl;
     }
     
}

