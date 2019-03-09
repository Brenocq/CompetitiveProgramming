/*#include<stdio.h>
#include<iostream>
using namespace std;

int n,coin;
int coins[101];
int parcialSum;
int totalSum;

int updateParcialSum(int num){
	int result = 0;

	for (int i = 100; i >= 1; i--){
		for (int j = 0; j < coins[i]; j++){
			result += i;
			num--;
			if (num <= 0)
				goto end;
		}
	}
end:
	return result;
}

int main(){
	cin >> n;
	for (int i = 0; i < n; i++){
		cin >> coin;
		coins[coin]++;
	}

	for (int i = 1; i <= 100; i++){
		totalSum += coins[i] * i;
	}

	int cont = 1;
	
	parcialSum = updateParcialSum(cont);


	while (parcialSum <= (totalSum - parcialSum)){
		cont++;
		parcialSum = updateParcialSum(cont);
	}

	cout <<cont;
	system("pause");
}*/

