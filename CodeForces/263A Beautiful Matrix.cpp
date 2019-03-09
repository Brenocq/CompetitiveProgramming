/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char matrix[6][6];

	int x, y;

	for (int i = 1; i <= 5; i++){
		for (int j = 1; j <= 5; j++){
			cin >> matrix[i][j];

			if (matrix[i][j] == ' '){
				cin >> matrix[i][j];
			}

			if (matrix[i][j] == '1'){
				y = i;
				x = j;
			}
		}
	}

	end:

	cout << abs(3 - x) + abs(3 - y);
	system("pause");
}*/