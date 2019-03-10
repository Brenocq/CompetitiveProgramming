#include<bits/stdc++.h>
using namespace std;

int n, fv, sv;
vector<int> result;

int main(){
	cin >> n;

	cin >> fv;

	result.push_back(1);
	for (int i = 0; i < (n-1); ++i)
	{
		sv = fv;
		cin >> fv;
		if(fv >= sv)
			result[result.size()-1]++;
		else{
			result.push_back(1);
		}

	}

	sort(result.begin(), result.end()); 
	
	cout << result.back();
	
	return 0;
}