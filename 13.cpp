#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
 int x,sum=0,maxsum=0;
vector<int> a;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
a.push_back(temp);
}
// kadan's algo
for(int i=0;i<a.size();i++)
{
    sum=sum+a[i];
    if(sum>maxsum)
    {
        maxsum=sum;
    }
    if(sum<0)
    {
        sum=0;
    }

}
   int k= *max_element(a.begin(),a.end());
   if(k<0)
    maxsum=k;

    cout<<maxsum;




}
