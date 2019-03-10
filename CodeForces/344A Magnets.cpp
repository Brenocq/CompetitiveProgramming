#include<bits/stdc++.h>
using namespace std;

unsigned long n, domino, lastdomino;

int main(int argc, char const *argv[])
{
	int r=1;
	cin >> n;

	cin >> domino;

	for (int i = 0; i < n-1; ++i)
	{
		lastdomino = domino;
		cin >> domino;
		if(lastdomino!=domino)
			r++;
	}

	cout<<r;
	return 0;
}