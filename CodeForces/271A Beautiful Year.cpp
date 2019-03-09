/*#include<bits/stdc++.h>
using namespace std;

int y;
bool dist=false;
string ys;

int main(){
	cin >> y;


	while (dist == false){
		dist = true;
		y++;

		ys = to_string(y);
		for (int i = 0; i < ys.size(); i++){
			for (int j = 0; j < ys.size(); j++){
				if (ys[i] == ys[j] && i!=j){
					dist = false;
				}
			}
		}
	}

	cout << y;
	system("pause");
}*/