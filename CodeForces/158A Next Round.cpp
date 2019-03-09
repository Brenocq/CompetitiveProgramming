/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	int n; cin >> n;
	int k; cin >> k;
	int players=0;

	int playersOK = 0;
	int min = 0;
	int count = 0;
	while (count<n){
		cin >> players;
		count++;
		if (count == k){
			min = players;
		}
		if (players >= min && players > 0)
			playersOK++;
		else
			break;
	}
	cout <<playersOK;
	system("pause");
}*/