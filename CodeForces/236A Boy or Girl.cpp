/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

char name[101];
int letters[26];
int sum;

int main(){
	
	cin >> name;

	for (int i = 0; i < 101; i++){
		if (name[i] >= 97 && name[i] <= 122){
			letters[name[i]-97] = 1;
			//cout << name[i] - 97<<" ";
		}
	}

	for (int j = 0; j <26; j++){
		if (letters[j] == 1)
			sum++;
	}

	

	if (sum % 2 == 0){
		cout << "CHAT WITH HER!";
	}
	else{
		cout << "IGNORE HIM!";
	}

	system("pause");
}*/