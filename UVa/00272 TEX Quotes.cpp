#include<bits/stdc++.h>
using namespace std;

string w1;

int main(){
	getline(cin, w1);
	bool b = true;
	for (int i = 0; i<w1.length(); i++) {
		if (b){
			if (w1[i] == '\"'){
				w1.insert(i, 1, '`');
				b = false;
				w1[i + 1] = '`';
			}
		}
		else{
			if (w1[i] == '\"'){
				w1.insert(i, 1, '\'');
				w1[i + 1] = '\'';
				b = true;
			}
		}
	}
	cout << w1;
	system("pause");
}
