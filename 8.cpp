#include<iostream>
#include<vector>
#include<algorithm>
#include<iterator>
#include<set>
using namespace std;
int main()
{int x;
vector<int> sum;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
sum.push_back(temp);
}

    int add=0,index=0;
    for(int i=0;i<sum.size();i++)
    {
        if(sum[i]>0){
        add = add  + sum[i];  }
        if(sum[i]<0)
        {
            index=index+1;
        }
    }
    if(index == sum.size())
    {
        add = -1;
    }
    cout<<add;


}
