/*#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	char players[101]; cin >> players; players[100]='\0';
	int out;

	bool lastBit = players[0];
	bool actualBit=0;

	int count=0;
	
	for (int i = 0; players[i] != '\0'; i++){
		players[i] == '1' ? actualBit = 1 : actualBit = 0;

		if (lastBit == actualBit)
			count++;
		else{
			lastBit = actualBit;
			count = 1;
		}

		if (count == 7){
			cout << "YES";
			return 0;
		}
	}

	cout << "NO";
	return 0;
}*/