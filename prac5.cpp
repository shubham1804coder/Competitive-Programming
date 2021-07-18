#include<bits/stdc++.h>
using namespace std;
void rotate(int arr[], int n)
{
   int ans[n];
    for(int i=0;i<n;i++)
    {
        if(i==0)
        ans[i]=arr[n-1];
        else
        ans[i]=arr[i-1];
    }
    for(int i=0;i<n;i++)
    {
        arr[i]=ans[i];
    }
}
int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	rotate(arr,n);
	for(int i=0;i<n;i++)
	{
		cout<<arr[i]<<" ";
	}
	cout<<endl;
}
