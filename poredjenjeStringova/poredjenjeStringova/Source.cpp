#include<iostream>
using namespace std;

void main() {
	char prva[10], druga[10];
	cin >> prva >> druga;
	if (strcmp(prva, druga) == 0)
		cout << "Rijeci su iste!" << endl;
	else
		cout << "Rijeci nisu iste!" << endl;
	system("pause>0");
}