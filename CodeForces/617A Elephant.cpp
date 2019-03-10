#include<bits/stdc++.h>
using namespace std;

int dist,r;

int main(int argc, char const *argv[])
{
	cin>>dist;

	if(dist<=5)
		cout<<1;
	else
	    cout<< dist/5 + ((dist%5)!=0);

	return 0;
}