#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
int x,k;
vector<int> a;
cout<<"enter the capacity";
cin>> x;
cout<<"enter the k";
cin>> k;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
a.push_back(temp);
}
    sort(a.begin(),a.end());
    cout<<a[a.size()-1]-a[0]-2*k;

}
