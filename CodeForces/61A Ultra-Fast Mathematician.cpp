#include<bits/stdc++.h>
using namespace std;

string num1s,num2s;
vector<int>num1i,num2i,r;

int main(int argc, char const *argv[])
{
	cin>> num1s >> num2s;

	for (int i = 0; i < num1s.size(); ++i)
	{
		num1i.push_back(num1s[i]=='1');
		num2i.push_back(num2s[i]=='1');
	}

	for (int i = 0; i < num1i.size(); ++i)
	{
		r.push_back(num1i[i]^num2i[i]);
	}

	for (int i = 0; i < r.size(); ++i)
	{
		cout<<r[i];
	}

	return 0;
}