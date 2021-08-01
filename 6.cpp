#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;
int main()
{
    int n,p;
    cout<<"enter value of array 1";
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);
    }
        cout<<"enter value of array 2";
    cin>>p;
    vector<int> v(n+p),v2,vv(n+p);
    for(int i=0;i<p;i++)
    {
        int value;
        cin>>value;
        v2.push_back(value);
    }
    vector<int> :: iterator it,it1;
    it= set_union(v1.begin(),v1.end(),v2.begin(),v2.end(),v.begin());

     cout<<"The union is : \n";
     v.resize(it-v.begin()); // all zero's will be removed ad resized
  for (it = v.begin(); it!=v.end(); ++it){
    cout << *it <<"  ";}

    it1= set_intersection(v1.begin(),v1.end(),v2.begin(),v2.end(),vv.begin());

  vv.resize(it1-vv.begin());
     cout<<"The intersection is : \n";
  for (it1=vv.begin(); it1!=vv.end(); ++it1)
    {
    cout << *it <<"  ";}}
