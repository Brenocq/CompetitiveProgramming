/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int luckyNum[14] = { 4, 7, 44, 47, 74, 77, 444, 447, 474, 744, 477, 747, 774, 777 };
int number=0;
bool isLucky = false;

int main(){
	cin >> number;

	for (int i = 0; i < 14; i++){
		if (number % luckyNum[i]==0)
			isLucky = true;
		if (number == luckyNum[i])
			isLucky = true;
	}

	if (isLucky){
		cout << "YES";
	}
	else{
		cout << "NO";
	}

	system("pause");
}*/