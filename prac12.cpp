#include<bits/stdc++.h>
using namespace std;
long long getNextEven(string str)
{
	int c=1;
	vector<int>v;
	vector<int>temp;
	vector<int>a;
	for(int i=0;i<str.size();i++)
	{
		v.push_back(str[i]-'0');
	}
	temp=v;
	a=v;
	sort(a.begin(),a.end());
	while(c>0)
	{
		next_permutation(temp.begin(),temp.end());
		if(temp[temp.size()-1]%2==0)
		{
			if(temp!=a)
			c=0;
		}
	    if(temp==a)
        return -1;

	}
	long long int result=0;
	for(auto pr :temp)
		result=result*10+pr;
	return result;
	
}
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		cout<<getNextEven(str);

	}
}
