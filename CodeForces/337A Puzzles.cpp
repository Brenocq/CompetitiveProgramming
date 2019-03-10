#include<bits/stdc++.h>
using namespace std;

int n,m;
vector<int>pieces;
vector<int>difference;


int main(int argc, char const *argv[])
{
	cin >> n >> m;

	for (int i = 0; i < m; ++i)
	{
		int val;
		cin >> val;
		pieces.push_back(val);
	}

	
	sort(pieces.begin(), pieces.end());

	if(m==n)
	{
		cout << pieces.back()-pieces.front();
	}
	else{
		for (int i = 0; i <= (m-n); ++i)	
		{
			difference.push_back(pieces[i+n-1] - pieces[i]);
		}


        sort(difference.begin(), difference.end());
    
		cout << difference.front();

	}
	

	return 0;
}