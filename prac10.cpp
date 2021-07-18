#include<bits/stdc++.h>
using namespace std;
void rearrange(long long *arr, int n) 
  { 
    vector<int>v;
    for(int i=0;i<n;i++)
    {
    	v.push_back(arr[n-1-i]);
    	v.push_back(arr[i]);
    }
    for(int i=0;i<n;i++)
		{
			arr[i]=v[i];
		}
	for(int i=0;i<n;i++)
	cout<<arr[i]<<" ";
    cout<<endl;
    
    	 
  }
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		long long int arr[n];
		for(int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		rearrange(arr,n);
	}
}
