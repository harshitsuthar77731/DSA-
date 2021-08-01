#include<iostream>
#include<vector>;
using namespace std;
int main()
{
          int x;
vector<int> neg;
cout<<"enter the capacity";
cin>> x;
for(int i=0;i<x;i++)
{
int temp;
cin>>temp;
neg.push_back(temp);
}
int index=0;
    for(int i=0;i<neg.size();i++)
    {
        int temp=0;
       if(neg[i]<0)
       {
           temp=neg[index];
           neg[index]=neg[i];
           neg[i]=temp;
           index++;
       }
    }
     for(int i=0;i<neg.size();i++)
 {
     cout<<neg[i]<<"  ";
 }
}

