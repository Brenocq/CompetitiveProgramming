#include<bits/stdc++.h>
using namespace std;

long long n,k;

int main(int argc, char const *argv[])
{
	cin >> n >> k;

	if(n%2==0){
		if(k <= n/2){//odd
			cout<< 1+(k-1)*2;
		}else{
			cout<< 2*(k - n/2);
		}
	}
	else{
		if(k <= (n+1)/2){//odd
			cout<< 1+(k-1)*2;
		}else{
			cout<< 2*(k - ((n+1)/2));
		}
	}
	
	return 0;
}