#include<bits/stdc++.h>
using namespace std;

long n,a,d;
string s;

int main(int argc, char const *argv[])
{
	cin>>n>>s;

	for (int i = 0; i < n; ++i)
	{
		if(s[i]=='A')
			a++;
		else
			d++;
	}

	if(a>d)
		cout<<"Anton";
	else if(d>a)
		cout<<"Danik";
	else
		cout<<"Friendship";

	return 0;
}