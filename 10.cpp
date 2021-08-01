#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
int x,index=0,step=0;
vector<int> a;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
a.push_back(temp);
}
while(true)
{
    if(a[index]<a.size())
    {
        step++;
        index=index+a[index];
    }
    else
    {
        break;
    }
}
cout<<step;

}
