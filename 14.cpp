#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
    vector<vector<int>> vect,vectf;
    cout<<"enter the capacity";
    int x;
    cin>>x;
    for(int i=0;i<x;i++)
    {
        vector<int> vect1;
        for(int i=0;i<2;i++)
        {
        int temp;
        cin>>temp;
        vect1.push_back(temp);
        }
        vect.push_back(vect1);
    }
    int t=0;
   while(true)
    {
        if(t>x)
            break;
        cout<<t;
        if(vect[t][1]>vect[t+1][0])
        {
        cout<<"["<<vect[t][0]<<","<<vect[t+1][1]<<"]";
        t=t+2;
        }
        else{

        cout<<"["<<vect[t][0]<<","<<vect[t][1]<<"]";
        t++;
        }
    }
}
