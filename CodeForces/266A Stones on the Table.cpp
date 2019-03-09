/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n; cin >> n;
	char word[51]; cin >> word;

	int cutOut = 0;
	char lastColor=' ';

	for (int i = 0; i < n; i++){
		if (word[i] == lastColor)
			cutOut++;
		lastColor = word[i];
	}

	cout << cutOut;
	system("pause");
}*/