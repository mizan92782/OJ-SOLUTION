#include<bits/stdc++.h>
using namespace std;



int main()
{

   int n;
   cin>>n;
   vector<vector<int>>vec(n+1);
   vector<int >input(n+1);

    int x;
   for(int i=1;i<(n+1);i++)
   {
        cin>>x;

        input[i]=x;
       if(x!=-1)
       {
             vec[x].push_back(i);
       }
   }




   int count=1;
   queue<int>que;
   vector<bool>exist(n+1,false);
  
    int maxi=0;
   
   for(int  i=1;i<(n+1);i++)
   {
         if(input[i]==-1)
         {
           
             maxi=max(maxi,count);
             count=1;
         }
     
        if(exist[i]==true)
        {
            continue;
        }

         que.push(i);
         que.push(-1);
         exist[i]=true;

       
        while(!que.empty())
        {
            int x=que.front();
            que.pop();


            if(que.size()==0)
            {
                break;
            }

            if(x==-1)
            {
                count++;


                que.push(-1);
                continue;
            }



            
          
            for(int k=0;k<vec[x].size();k++)
            {   
                que.push(vec[x][k]);
                exist[vec[x][k]]=true;
               
              
            }

          


           
            
            
            
        }



        


   }

   cout <<maxi<< endl;

  
  
  return 0;

}