#include<iostream>
#include<vector>
#include<map>
using namespace std;
int main()
{
int x;
map<int,int> m;
map<int,int> :: iterator it;
vector<int> a;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
a.push_back(temp);
}
for(int i=0;i<x;i++)
{
    if(m.find(a[i])== m.end())
    {
        m[a[i]]=1;
    }
    else
    {
        m[a[i]]=m[a[i]]+1;
    }
}
int k=0;
for( auto it=m.begin();it!=m.end();it++)
{
    if(it->second>1)
    {
        cout<<it->first;
    }
}
}
