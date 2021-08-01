#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
    int x;
vector<int> rev;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
rev.push_back(temp);
}
reverse(rev.begin(),rev.end());
for(int i=0;i<rev.size();i++)
{
cout<<rev[i];
}
}
