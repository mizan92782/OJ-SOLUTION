#include<bits/stdc++.h>
using namespace std;



int main()
{

    ios_base::sync_with_stdio(false), cin.tie(NULL);
     int t;
     cin>>t;

    
     while (t--)
     {
       
         int n=3;
         long long  arr[n];
         for(int i=0;i<n;i++)
         { cin>>arr[i];
         }



         sort(arr,arr+n);

        long long count=0;


   
         for(int i=1;i<n;i++)
         {
             if((arr[i] % arr[0])==0)
             {
               
                  
                   if(arr[i]!=arr[0])
                   {
                      count=count+(arr[i]/arr[0]);
                    if((arr[i]/arr[0])>=2) count--;
                   }
                
               
             }else{

            count=10;
            break;

            }
         
        
        
         }

         
         (count<=3) ?  cout<<"YES\n" : cout<<"NO\n";
        




     }
        


     
     
}