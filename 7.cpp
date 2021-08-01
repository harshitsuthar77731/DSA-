#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;
int main()
{
     int n,p;
    cout<<"enter value of array";
    cin>>n;
    vector<int> v1;
    for(int i=0;i<n;i++)
    {
        int value;
        cin>>value;
        v1.push_back(value);
    }
    int temp=v1[v1.size()-1];
    for(int i=0;i<v1.size();i++)
    {
     v1[v1.size()-1-i]=v1[v1.size()-2-i];
    }
    v1[0]=temp;
    for(int i=0;i<v1.size();i++)
    {
        cout<<v1[i];

    }

}
