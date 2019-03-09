/* #include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n; cin >> n;
	char word[100][101];

	for (int i = 0; i < n; i++){
		cin >> word[i];
	}
	for (int i = 0; i < n; i++){
		int wSize = 0;
		for (int j = 0; j <= 100; j++){
			if (word[i][j] == '\0'){
				wSize = j;
				j = 101;
			}
		}

		if (wSize > 10){
			cout << word[i][0];
			cout << (wSize - 2);
			cout << word[i][wSize - 1];
			cout << "\n";
		}
		else{
			cout << word[i];
			cout << "\n";
		}
	}
	
	system("pause");
}*/