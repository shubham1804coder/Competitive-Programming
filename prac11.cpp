#include<bits/stdc++.h>
using namespace std;
int getSingle(int arr[], int n) 
	{
	    int a;
	    map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        m[arr[i]]=m[arr[i]]+1;
	    }
	    for(auto &pr :m)
	    {
	        if(pr.second%2==1)
	        {
	            a=pr.first;
	            return a;
	        }
	    }
	    return 0;
	    // code here
	}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		cout<<getSingle(arr,n)<<endl;


	}
}
