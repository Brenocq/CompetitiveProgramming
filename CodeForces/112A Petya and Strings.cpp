/*#include<stdlib.h>
#include<iostream>
using namespace std;

int main(){
	char word1[101]; cin >> word1;
	char word2[101]; cin >> word2;
	int out;

	for (int i = 0; word1[i] != '\0'; i++){
		word1[i] <= 90 ? word1[i] = (word1[i] - 65) + 32 : word1[i]=(word1[i] - 65);
		word2[i] <= 90 ? word2[i] = (word2[i] - 65) + 32 : word2[i]=(word2[i] - 65);

		if (word1[i] != word2[i]){
			if (word1[i] > word2[i]) out = 1;
			else if (word1[i] < word2[i]) out = -1;

			cout << out;
			return 0;
		}
	}
	cout << 0;
	return 0;

	system("pause");
}*/