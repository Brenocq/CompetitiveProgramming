/*#include<stdlib.h>
#include<iostream>
#include<string.h>
using namespace std;

int minCapacity, peopleInside, in, out;
int main(){
	int n; cin >> n;

	for (int i = 0; i < n; i++){
		cin >> out;
		peopleInside -= out;
		cin >> in;
		peopleInside += in;

		peopleInside>minCapacity ? minCapacity = peopleInside : minCapacity;
	}
	cout << minCapacity;
	system("pause");
}*/