#include<bits/stdc++.h>
using namespace std;

#define fast ios_base::sync_with_stdio(false), cin.tie(NULL)

int main()
{
    //https://codeforces.com/problemset/problem/1878/C
    /*
      n=10,k=3 x=any number
      1,2,3,4,5,6,7,8,9,10
      mini=1+2+3;
      maxi=8,9,10

      if(x>=mini && x<=maxi)
      {
        posiible to find this number
      }


    */

   fast;
   int t;
   cin>>t;
   while (t--)
   {
      long long n,k,x;
      cin>>n>>k>>x;


      long long maxi=(n*(n+1))/2;
      long long mini=(k*(k+1))/2;

      long long diff=(n-k);
      diff=maxi-(diff* (diff+1))/2;

      if(x>=mini && x<=diff)
      {
        cout<<"YES\n";
      }else{
        cout<<"NO\n";
      }
      

   }
   
}