#include<bits/stdc++.h>
using namespace std;

string myfun(vector<int>& vec)
{
     for(int i=1;i<vec.size();i++)
     {   
         int f=i;  //1
         int s=vec[i];//f like
         int t=vec[s];
         int x=vec[t];
         if(f==x)
         {
            
            return "YES";
         }
     }


     return "NO";
}
int main()
{
     
      int n;
      cin>>n;
       n=n+1;
       vector<int>vec(n);
       vec[0]=0;

       for(int i=1;i<n;i++)
       {
        cin>>vec[i];
       }

       cout<<myfun(vec)<<endl;

 
}