/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char word[101]; cin >> word;
	int index = 0;
	char _word[201];
	int index_word = 0;

	char vowels[12] = { 'A', 'O', 'Y', 'E', 'U', 'I', 'a', 'o', 'y', 'e', 'u', 'i'};

	while (word[index] != '\0'){
		for (int i = 0; i < 12; i++){
			if (word[index] == vowels[i]){
				goto end;
			}
		}

		_word[index_word] = '.'; index_word++;

		if (int(word[index]) <= 90 && int(word[index]) >= 65)
			word[index] = char(word[index] += 32);

		_word[index_word] = word[index]; index_word++;
		
	end:

		index++;
	}
	_word[index_word] = '\0';
	cout << _word;

	system("pause");
}*/