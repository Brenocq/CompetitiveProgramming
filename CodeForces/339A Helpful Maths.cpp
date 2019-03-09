/*#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	char sum[101]; cin >> sum; sum[100] = '\0';
	int numbers[4] = {0,0,0,0};

	for (int i = 0; sum[i] != '\0'; i++){
		switch (sum[i]){
			case '1':
				numbers[1]++;
				break;
			case '2':
				numbers[2]++;
				break;
			case '3':
				numbers[3]++;
				break;
			case '+':
				break;

		}
	}


	for (int i = 0; i < numbers[1]; i++){
		cout << '1';
		if (i + 1 < numbers[1]){
			cout << '+';
		}
	}

	if (numbers[1]>0  && numbers[2]>0){
		cout << '+';
	}

	for (int i = 0; i < numbers[2]; i++){
		cout << '2';
		if (i + 1 < numbers[2]){
			cout << '+';
		}
	}

	if ((numbers[1]>0 || numbers[2]>0) && numbers[3]>0){
		cout << '+';
	}


	for (int i = 0; i < numbers[3]; i++){
		cout << '3';
		if (i + 1 < numbers[3]){
			cout << '+';
		}
	}


	system("pause");
}*/