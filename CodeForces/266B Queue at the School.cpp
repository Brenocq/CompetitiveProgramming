/*#include<bits/stdc++.h>
using namespace std;

string start;
int n,t;

string run(string s1){

	for (int i = 0; i < (s1.size() - 1); i++){
		if (s1[i] == 'B' && s1[i + 1] == 'G'){
			s1[i + 1] = 'B';
			s1[i] = 'G';
			i++;
		}
	}

	return s1;
}

int main(){
	cin >> n >> t;
	cin >> start;

	
	for (int i = 0; i < t; i++){
		start = run(start);
	}

	cout << start;

	system("pause");
}*/