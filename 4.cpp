#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v1;
    v1={2,0,1,0,2};
    int x0=0,x1=0,x2=0;
 for(int i=0;i<v1.size();i++)
    {
        if(v1[i]==0)
        {
            x0++;
        }
          if(v1[i]==1)
        {
            x1++;
        }
          if(v1[i]==2)
        {
            x2++;
        }
    }
    for(int i=0;i<v1.size();i++)
    {
        if(x0>0)
        {
            v1[i]=0;
            x0=x0-1;
        }
        else if(x1>0)
        {
            v1[i]=1;
            x1=x1-1;
        }
        else if(x2>0)
        {
            v1[i]=2;
            x2=x2-1;
        }
    }
 for(int i=0;i<v1.size();i++)
 {
     cout<<v1[i]<<"  ";
 }
}
