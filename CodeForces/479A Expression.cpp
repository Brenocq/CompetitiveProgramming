#include<bits/stdc++.h>
using namespace std;

int n1,n2,n3;
vector<int>r;

int main(int argc, char const *argv[])
{
	cin >> n1 >> n2 >> n3;

	r.push_back(n1+n2+n3);
	r.push_back(n1*n2+n3);
	r.push_back(n1+n2*n3);
	r.push_back(n1*n2*n3);
	r.push_back((n1+n2)*n3);
	r.push_back(n1*(n2+n3));

	sort(r.begin(),r.end());

	cout << r.back();

	return 0;
}