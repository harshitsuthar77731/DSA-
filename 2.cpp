#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector <int> x1;
    x1={1,2,5,4,3};
    int temp1 = x1[0];
    int temp2 = x1[0];
    for(int i=0;i<5;i++)
    {
        if(temp1<x1[i])
        {
            temp1 = x1[i];
        }
        if(temp2>x1[i])
        {
            temp2 = x1[i];
        }
    }
    cout<<temp1<<" "<<temp2;
}

