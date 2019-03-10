#include<bits/stdc++.h>
using namespace std;

int n;

int give[101], received[101];


int main(int argc, char const *argv[])
{
	cin >> n;

	for (int i = 1; i <= n; ++i)
	{
		cin >> give[i];
		received[give[i]]=i;
	}

	for (int i = 1; i <= n; ++i)
	{
		cout << received[i];
		if(i<n)
			cout<<" ";
	}
	return 0;
}