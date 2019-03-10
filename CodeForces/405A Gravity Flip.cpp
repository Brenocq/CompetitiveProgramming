#include<bits/stdc++.h>
using namespace std;

int n;
vector<int> c;

int main(int argc, char const *argv[])
{
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		int val; cin>>val;
		c.push_back(val);

	}

	sort(c.begin(),c.end());

	for (int i = 0; i < c.size(); ++i)
	{
		cout<<c[i];
		if(i < (c.size()-1))
			cout<<" ";

	}

	return 0;
}