#include<iostream>
#include<vector>
using namespace std;
int main()
{
    int k;
    cin>>k;
    vector<int> x1;
    x1={3,2,4,5,6,1,8,7};
    for(int i=0;i<x1.size();i++)
    {
        int temp=0;
        for(int i=0;i<x1.size()-1;i++)
        {
            if(x1[i]>x1[i+1])
            {
                temp=x1[i];
                x1[i]=x1[i+1];
                x1[i+1]=temp;
            }
        }

    }
        cout<<x1[k-1];
}
