#include<iostream>
#include<vector>
#include<algorithm>
#include<math.h>
using namespace std;

void merge(int arr1[], int arr2[], int n, int m) {

	    int i=0,k=0,size=n+m;
	    for (int t=0;t<size;t++)
	    {
	     if(arr1[i]<arr2[k]&n>0)
	     {

	       cout<<arr1[i]<<" ";
	       i++;
	           n--;
	     }
	     else if(m>0)
	     {
	         cout<<arr2[k]<<" ";
	         k++;
	          m--;
	     }
	    }
	}
	int main()
	{

	    int a[]={1,3,5,7},b[]={0,2,6,8,9},n=4,m=5;
	    merge(a,b,n,m);
	}
